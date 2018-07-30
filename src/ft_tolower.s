[bits 64]

section .text
global _ft_tolower

; int		_ft_tolower(int c)
_ft_tolower:
	xor		rax, rax		; rax is zero at the moment
	mov		rax, rdi

	cmp		rdi, 'A'		; ('A' > c)
	jg		.lowercase	 	;

	cmp		rdi, 'Z'		; ('Z' < c)
	jl		.lowercase	 	;

	.lowercase:				; lowercase when the condition is met
		add	rdi, 32	 		; (c + 32) to make it lowercase
		mov	rax, rdi		; new rdi into rax (rax = rdi) now

	.exit:					; otherwise, exit and return it's original value
		mov rax, rdi		; maybe unnecessary instruction here?
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
