[bits 64]								; This is like a shebang, but telling
										; the computer which CPU is used
										; RIP Tony. You will be in this file
										; dicks out for you

section .text
global _ft_strlen						; main


; unsigned	ft_strlen(const char *str);
_ft_strlen:
	mov		rcx, -1				; fix this into hexadecimal purpose
	xor		al, al
	cld							; clear data
	repne	scasb				; scan string for NUL, decrementing each char
	not		rcx					; again, reversing all bits
	dec		rcx					; decrement rcx by one, which will contain then
								; contain the length of the string
	mov		rax, rcx
	ret
