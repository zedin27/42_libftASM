[bits 64]

section .text
global _ft_toupper

; int		_ft_toupper(int c)
_ft_toupper:
	xor		rax, rax ; 		rax is zero at the moment
	mov		rax, rdi

	cmp		rdi, 'a'		; ('a' > c)
	ja		.uppercase		;

	cmp		rdi, 'z'		; ('z' < c)
	jb		.uppercase		;

	.uppercase:				; uppercase if the condition is met
		sub	rdi, 32	 		; (c - 32) to make it uppercase
		mov rax, rdi 		; new rdi into rax (rax = rdi) now

	.exit:					; otherwise, exit it's original value
		mov rax, rdi
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
