[bits 64]

section .text
global _ft_memset

; void		ft_memset(void *b, int c, size_t len) ; ft_memset(rdi, rsi, rdx)
_ft_memset:
	xor		rax, rax	; negating
	push	rdi			; push rdi to stack
	mov		rax, rsi	; placing rsi value into rax stack
	mov		rcx, rdx	; 
	cld					;
	rep		stosb		;
	.exit:
		pop	rax
		ret
