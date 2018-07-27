; Tell compiler to use 64 bit code
[bits 64]

; Tell assembler what symbols (functions) to export
global _ft_strlen

; .text section is where all code lives
section .text

; unsigned ft_strlen(const char *str)
_ft_strlen:
	; rax registry stores function return values
	xor			rax, rax ; make sure rax is null

	; creat local label -- start with '.'
	.loop_start:
	mov 		bl, byte [rdi]	; loads single byte into rbx (bl) from rdi
	cmp 		bl,	0			; check bl is 0
	jz			.finish_loop	; if cmp is 0 go to .finish_loop

	inc			rax				; rax++
	inc			rdi				; rdi++ -- increment to next char of rdi
	jmp			.loop_start		; jump to .loop_start to continue looping

	.finish_loop:
	ret							; return
