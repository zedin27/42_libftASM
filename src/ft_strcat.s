section .text
global	_ft_strcat

_ft_strcat:
	mov		rbx, rdi
	mov		rcx, rsi

loop1:
	cmp		byte [rbx], 0
	je		loop2
	inc		rbx
	jmp		loop1

loop2:
	cmp		byte [rcx], 0
	je		end
	mov		al, byte [rcx]
	mov		byte [rbx], al
	inc		rcx
	inc		rbx
	jmp		loop2

end:
	mov		rax, rdi
	ret
