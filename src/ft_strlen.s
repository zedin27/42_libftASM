[bits 64]								; This is like a shebang, but telling
										; the computer which CPU is used
										; RIP Tony. You will be in this file
										; dicks out for you

section .text
global ft_strlen						; main

%define NULL 0x00

; unsigned	ft_strlen(const char *str);
ft_strlen:
	sub		rcx, rcx			; setting up to NULL by subtracting
	not		rcx					; two's complement

	cld							; clear data
	repnz	scasb				; scan string for NUL, decrementing each char
	not		rcx					; again, reversing all bits
	dec		rcx					; decrement rcx by one, which will contain then
								; contain the length of the string
