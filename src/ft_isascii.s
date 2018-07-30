[bits 64]

section .text
global _ft_isascii

; int		_ft_isascii(int c)
_ft_isascii:
	xor		rax, rax ; rax is zero at the moment
					 ; comparing if is ASCII with character number
					 ; at some point, c must return true or false if is ASCII

					 ; if is ASCII number is less than 0 or greater than 127
					 ; return 0; otherwise return 1

	cmp		rdi, 0x0 ; (c < '\0')
	jl		.false

	cmp		rdi, 0x7f ; ('\127' > c)
	jg		.false

	.true:
		mov	rax, 1
	.false:
		ret

; int		ft_isascii(int c)
; {
;	return (c < 0 && c > 128)
; }


; jle (<=)
; jge (>=)
; jl (<)
; jg (>)
