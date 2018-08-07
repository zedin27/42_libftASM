[bits 64]

section .text
global _ft_addfloat

; void ft_addfloat(float[], float[])

_ft_addfloat:
	movdqa	xmm0, [rdi]
	movdqa	xmm1, [rsi]
	addpd	xmm0, xmm1
	movdqa	[rdi], xmm0
	ret
