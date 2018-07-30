[bits 64]

section .text
global _ft_memset

; void		ft_memset(void *b, int c, size_t len) ; ft_memset(rdi, rsi, rdx)
_ft_memset:
	xor		rax, rax
	push	rdi
	mov		rax, rsi
	mov		rcx, rdx
	cld
	rep		stosb
	.exit:
		pop	rax
		ret
