[bits 64]

section .text
global _ft_lstadd

_ft_lstadd:
	fld		qword [rdi]		; read the number given
	fsqrt
	fst		qword [rax]
	ret
