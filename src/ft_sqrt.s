[bits 64]

section .text
global _ft_sqrt

; double sqrt(double num);
_ft_sqrt:
	fld		qword [rdi]		; read the number given
	fsqrt
	fst		qword [rax]
	ret
