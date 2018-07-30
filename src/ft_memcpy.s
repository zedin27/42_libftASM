[bits 64]

section .text
global _ft_memcpy
; void 			*ft_memcpy(void *restrict dst, const void *restrict src, size_t n);

_ft_memcpy:
	xor		rcx, rcx
	push	rdi
	mov		rcx, rdx
	rep		movsb
	pop		rcx
	.exit:
		ret
