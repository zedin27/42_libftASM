[bits 64] ; too extra

section .text
global _ft_sub

; int ft_sub(int x, int y)

_ft_sub:
	sub		rdi, rsi
	mov		rax, rdi
	ret
