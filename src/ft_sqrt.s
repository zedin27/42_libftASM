[bits 64]

section .text
global _ft_sqrt

; double sqrt(double num);
_ft_sqrt:
	fld		qword [rdi]		; float load or read the number given
	fsqrt					; float square root instruction
	fst		qword [rax]		; float store value to rax
	ret						; and return it's value
