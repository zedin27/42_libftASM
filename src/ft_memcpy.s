[bits 64]

section .text
global _ft_memcpy
; void 			*ft_memcpy(void *restrict dst, const void *restrict src, size_t n);

_ft_memcpy:
	xor		rcx, rcx	; negation
	push	rdi			; placing our first destination to the stack
	mov		rcx, rdx	; storing rdx into rcx
	rep		movsb		; move byte address with repeat string operation
	pop		rcx			; pulling the value of rcx out
	.exit:				; otherwise, return
		ret
