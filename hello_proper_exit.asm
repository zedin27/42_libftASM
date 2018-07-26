section .data
	message: db 'hello, world!', 10

section .text
	global start

start:
	mov		rax, 0x2000004
	mov		rdi, 1
	mov		rsi, message
	mov		rdx, 14
	syscall

	mov		rax, 0x2000001
	xor		rdi, rdi
	syscall
