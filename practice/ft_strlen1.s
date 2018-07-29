; another runthrough of ft_strlen
; use repeated string operations

[bits 64]

section .text
global ft_strlen1

ft_strlen1:
		push	rdi				; pushing stack to file descriptor
		sub		rcx, rcx		;
		mov		rdi, [rsp + 8]	;
		not		rcx				;
		sub		rax, rax		; setting up to NULL
		cld
	repnz	scasb				; scan string for NUL, decrementing each char
		not		rcx				; reversing all bits
		dec		rcx				; decrement rcx by one, which will contain then
								; contain the length of the string
