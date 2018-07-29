[bits 64]

global _ft_puts

section .data

section .text

%define SYS_WRITE 0x2000004

%define SYS_EXIT 0x2000001

_ft_puts:
	mov		rax, SYS_WRITE		; syscall write
	mov		rdi, 1				; stdout fd (where will it write?)
	mov		rsi					; string address (where does it start?)
	mov		rdx, 20				; string length in bytes (how many bytes to write?)
	syscall						; system call

	mov		rax, SYS_EXIT		; exit system call
	xor		rdi, 0				; 0 can be replaced with rdi
	syscall
