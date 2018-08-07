[bits 64]

section .text
global _ft_factorial

; uint64_t ft_factorial(uint64_t num)

_ft_factorial:
	cmp		rdi, 1
	jnbe	.rec
	mov		rax, 1
	ret

.rec:
	push	rdi
	dec		rdi
	call	_ft_factorial
	pop		rdi
	imul	rax, rdi
	ret
