[bits 64]

global start

section .data
	strn: db "hello", 0

section .text

ft_strlen:
	xor rax, rax

.loop:
	cmp byte [rdi + rax], 0
	je .end
	inc rax
	jmp .loop

.end:
	ret

start:
	mov rdi, strn
	call ft_strlen
	mov rdi, rax

	mov rax, 60
	syscall
