[bits 64]

section .text
global _ft_lsttraverse

_ft_lsttraverse:
	fld		qword [rdi]		; read the number given
	fsqrt
	fst		qword [rax]
	ret
