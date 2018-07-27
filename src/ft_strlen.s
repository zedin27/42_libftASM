[bits 64]								; This is like a shebang, but telling
										; the computer which CPU is used

section .text
global ft_strlen						; main

ft_strlen:
	xor		rax, rax
	.loop:
		cmp byte [rdi + rax], 0			; compares null character to the byte
		je .end							; if is NULL, then end
		inc rax							; increase rax by 1
		jmp .loop						; jumps to the next iteration
	.end:
		ret
