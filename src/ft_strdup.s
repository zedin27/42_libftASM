[bits 64]

global _ft_strdup
section .text

extern _malloc
extern _ft_strlen
extern _ft_strcat

%define NULL 0x00

; char *ft_strdup(const char *src)
_ft_strdup:
	push	rdi
	call	_ft_strlen		; len -> rax
	mov		rdi, rax		; rax -> len -> rdi
	inc		rdi				; rdi++ for new '\0'
	call	_malloc			; returns to new allocated memory

	cmp		rax, NULL		; check if malloc failed
	je		.exit			; if malloc failed, return NULL
	mov		rdi, rax		; size for our new string getting duplicated
	pop		rsi				; rsi is now rdi
	call	_ft_strcat		; calling ft_strcat
	ret
	.exit:
		mov rax, NULL
		ret
