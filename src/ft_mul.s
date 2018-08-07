[bits 64]

section .text
global _ft_mul

; int ft_mul(int x, int y)

_ft_mul:
	imul	rdi, rsi
	mov		rax, rdi
	ret
