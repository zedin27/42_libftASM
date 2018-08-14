[bits 64]

section .text
global _ft_sqrt

; double sqrt(double num);
_ft_sqrt:
	sqrtpd	xmm0, xmm0
	ret						; and return it's value
