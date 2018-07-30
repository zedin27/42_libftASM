[bits 64]

section .text
global _ft_toupper

; int		_ft_toupper(int c)
_ft_toupper:
	xor		rax, rax ; rax is zero at the moment
	mov		rax, rdi

	cmp		rdi, 'a'		; ('a' < c)
	jl		.exit	 		; exit

	cmp		rdi, 'z'		; ('z' > c)
	jg		.exit		 	; exit

	.uppercase:				; otherwise, uppercase
		sub	rdi, 32	 ; (c - 32) to make it uppercase
		mov rax, rdi ; add the new rdi into rax

	.exit
		ret

; int		ft_toupper(int c)
; {
;	if (c >= 'a' && c <= 'z')
;		return (c - 32);
;	return (c);
; }

; jle (<=)
; jge (>=)
; jl (<)
; jg (>)
