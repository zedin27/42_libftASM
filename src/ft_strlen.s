[bits 64]								; This is like a shebang, but telling
										; the computer which CPU is used

section .text
global ft_strlen						; main

ft_strlen:
	push	rdi				; pushing stack to file descriptor
	sub		rcx, rcx		;
	cmp byte [rdi + rax], 0	; compares null character to the byte
	not		rcx				; two's complement
	sub		rax, rax		; setting up to NULL

	cld
	repnz	scasb			; scan string for NUL, decrementing each char
	not		rcx				; again, reversing all bits
	dec		rcx				; decrement rcx by one, which will contain then
							; contain the length of the string
