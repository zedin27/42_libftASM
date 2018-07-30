[bits 64]

section .text
global _ft_isdigit

; int		_ft_isdigit(int c)
_ft_isdigit:
	xor		rax, rax ; rax is zero at the moment

	cmp		rdi, 0x30 ; (c < 0)
	jl		.false

	cmp		rdi, 0x39 ; (9 > c)
	jg		.false

	.true:
		mov	rax, 1
	.false:
		ret

; int		ft_isdigit(int c)
; {
;	if (c >= '0' && c <= '9')
;		return (1);
;	return (0);
; }

; jle (<=)
; jge (>=)
; jl (<)
; jg (>)
