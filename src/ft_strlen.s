[bits 64]								; This is like a shebang, but telling
										; the computer which CPU is used

section .text
global ft_strlen						; main

; unsigned	ft_strlen(const char *str);
ft_strlen:
	push	rdi				; pushing stack to file descriptor
	sub		rcx, rcx		;
	cmp byte [rdi + rax], 0	; compares null character to the byte, so dst[rax]
	not		rcx				; two's complement
	sub		rax, rax		; setting up to NULL by subtracting

	cld						; clear data
	repnz	scasb			; scan string for NUL, decrementing each char
	not		rcx				; again, reversing all bits
	dec		rcx				; decrement rcx by one, which will contain then
							; contain the length of the string
