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

	cmp		rdi, 'A' ; (c < 'A')
	jl		.false	 ;

	cmp		rdi, 'Z' ; (c > 'Z')
	jle		.true	 ;

	cmp		rdi, 'a' ; (c < 'a')
	jl		.false	 ;

	cmp		rdi, 'z' ; !(c <= 'z')
	jg		.false	 ;

	.true:
		mov	rax, 1
	.false:
		ret
