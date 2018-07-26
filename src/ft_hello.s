[bits 64]

global start
section .data
	hello_world db 'Hello World!', 0x0a

section .text

start:
	mov		rax, 0x2000004		; syscall write
	mov		rdi, 1				; stdout fd (where will it write?)
	mov		rsi, hello_world	; string address (where does it start?)
	mov		rdx, 20				; string length in bytes (how many bytes to write?)
	syscall						; system call

	mov		rax, 0x2000001		; exit system call
	xor		rdi, 0				; 0 can be replaced with rdi
	syscall
