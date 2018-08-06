[bits 64]

section .text
global _ft_add

; int ft_add(int x, int y)

_ft_add:
	add		rdi, rsi
	mov		rax, rdi
	ret
