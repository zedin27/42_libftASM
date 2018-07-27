; this ";" is making a comment in ASM

[bits 64]

section .data
	message: db 'hello, world!', 10	; the number '10' represents newline in ASCII
									; 'hello, world!' to newline basically
section .text
global start

start:
	mov		rax, 0x2000004				; holds the syscall # write(rdi, rsi, rdx)
	mov		rdi, 0x01					; first file descriptor (stdout)
	mov		rsi, message				; read string 'hello, world!'
	mov		rdx, 14						; setting buff size to 14
	syscall								; call kernel

	; exit
	mov		rax, 0x2000001				; exit system call hex number
	xor		rdi, rdi					; exit status
	syscall
