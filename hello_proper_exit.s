; this ";" is making a comment in ASM

[bits 64]

section .data
	message: db 'hello, world!', 10
section .text
global start
global exit

start:
	mov		rax, 0x2000004
	mov		rdi, 0x01
	mov		rsi, message
	mov		rdx, 14
	syscall

	mov		rax, 0x2000001
	xor		rdi, rdi
	syscall

exit:
	mov		rax, 60
	syscall
