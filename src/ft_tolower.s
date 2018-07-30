[bits 64]

section .text
global _ft_tolower

; int		_ft_tolower(int c)
_ft_tolower:
	xor		rax, rax ; rax is zero at the moment
	mov		rax, rdi

	cmp		rdi, 'A'		; ('A' < c)
	jl		.exit	 		; exit

	cmp		rdi, 'Z'		; ('Z' > c)
	jg		.exit		 	; exit

	.lowercase:				; otherwise, uppercase
		add	rdi, 32	 ; (c - 32) to make it uppercase
		mov	rax, rdi ; add the new rdi into rax

	.exit
		ret

; int		ft_tolower(int c)
; {
;	if (c >= 'A' && c <= 'A')
;		return (c + 32);
;	return (c);
; }

; jle (<=)
; jge (>=)
; jl (<)
; jg (>)
