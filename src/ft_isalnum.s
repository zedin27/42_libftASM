[bits 64]

global _ft_isalnum
section .text

extern _ft_isalpha
extern _ft_isdigit

; int		ft_isalnum(int c)
_ft_isalnum:
	xor			rax, rax 		; zero out rax registry

	call _ft_isdigit
	cmp rax, 1 ; see if true
	jz	.ret_true

	call _ft_isalpha
	cmp rax, 1 ; see if true
	jz .ret_true

	mov rax, 0

	.ret_true:
	ret
