[bits 64]

section .data
	strn: db "hello", 0					; "hello" to NUL-byte
section .text
global start							; main

ft_strlen:
	xor rax, rax						; rax will store the length of strn

.loop:
	cmp byte [rdi + rax], 0				; compares next character a null character
	je .end								; if is NULL, then .end
	inc rax								; increase rax by 1
	jmp .loop							; jumps to the next iteration

.end:
	ret

start:
	mov rax, 0x2000004
	mov rdi, strn
	call ft_strlen
	mov rdi, rax

	;exit
	mov rax, 0x2000001
	syscall
