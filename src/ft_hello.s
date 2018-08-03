[bits 64]

global _ft_hello

section .data
	hello_world db 'Hello World!', 0x0a

section .text

%define SYS_WRITE 0x2000004

%define SYS_EXIT 0x2000001

_ft_hello:
	mov		rax, SYS_WRITE			; syscall write
	mov		rdi, 1					; stdout fd (where will it write?)

	mov		rsi, hello_world		; string address (where does it start?)
									; NOTE: having to move the message into rsi
									; will throw a warning message about PIE
									; compability. In order to avoid this warning
									; message, the address must be relative
									; instead of absolute.

;	lea		rsi, [rel hello_world]	; string address (where does it start?)
	mov		rdx, 20					; string length in bytes (how many bytes to write?)
	syscall							; system call

	mov		rax, SYS_EXIT			; exit system call
	xor		rdi, 0					; 0 can be replaced with rdi
	syscall
