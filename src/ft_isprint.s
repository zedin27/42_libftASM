[bits 64]

section .text
global _ft_isprint

; int		_ft_isprint(int c)
_ft_isprint:
	xor		rax, rax ; rax is zero at the moment

	cmp		rdi, 0x20 ; (c < ' ')
	jl		.false

	cmp		rdi, 0x7e ; ('~' > c)
	jg		.false

	.true:
		mov	rax, 1
	.false:
		ret
