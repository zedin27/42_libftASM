[bits 64]

section .text
global _ft_isalpha

; int		ft_isalpha(int c)
_ft_isalpha:
	xor		rax, rax ; rax is zero at the moment
					 ; comparing ASCII value of c with other characters
					 ; at some point, c must return true if is a letter

					 ; compare c character with (A < Z < a < z)
					 ; 							65 < 90 < 97 < 122

	cmp		rdi, 'A' ;
	jl		.false	 ; jump end if less than or equal to 'A' test this!

	cmp		rdi, 'Z' ;
	jle		.true	 ; jump end if is greater than or equal to 'Z' test this!

	cmp		rdi, 'a' ;
	jl		.false	 ;

	cmp		rdi, 'z' ;
	jg		.false	 ;

	.true:
		mov	rax, 1
	.false:
		ret

; int		ft_isalpha(int c)
; {
;	if (('a' <= (c | 32) && 'z' >= (c | 32))) ; 32-bit flag
;	if (('a' <= c && 'z' >= c) || ('A' <= c && 'Z' >= c))
;		return (1);
;	return (0);
; }


; jle (<=)
; jge (>=)
; jl (<)
; jg (>)
