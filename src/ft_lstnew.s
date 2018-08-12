[bits 64]

section .text
global _ft_lstnew

_ft_lstnew:
	fld		qword [rdi]		; read the number given
	fsqrt
	fst		qword [rax]
	ret
