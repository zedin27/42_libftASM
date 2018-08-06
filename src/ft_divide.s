global _ft_divide

section .text

; int ft_divide(int dividend, int divisor)
_ft_divide:

	mov rdx, 0
	mov rax, rdi		; dividend
	mov rcx, rsi		; divisor
	div rcx
	push rbx

	add rsp , 8
	ret
