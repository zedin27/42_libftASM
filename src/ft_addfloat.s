[bits 64]

section .text
global _ft_addfloat

; float ft_addfloat(float[], float[])

_ft_addfloat:
	movdqa	xmm0, [rdi]
	movdqa	xmm1, [rsi]
	addps	xmm0, xmm1
	movdqa	[rdi], xmm0
	ret
