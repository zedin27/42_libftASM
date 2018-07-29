; another runthrough of ft_strlen

[bits 64]

section .text
global _ft_strlen1

_ft_strlen1:
		push	rdi
		sub		rcx, rcx
		mov		rdi, [rsp + 8]
		not		rcx
		sub		rax, rax
		cld
	repnz	scasb				; scan string for NUL, decrementing each char
		not		rcx
		dec		rcx
