[bits 64]

global _ft_bzero

section .text
extern _ft_memset						; looking at my libft, I was able to
 										; put ft_memset.c into my ft_bzero.c. How
										; is it possible to call this function for
										; my ft_bzero.s

; unsigned ft_bzero(void *s, size_t n)		; ft_bzero(rdi, rsi)
_ft_bzero:
	.loop:
	cmp		rsi, 0
	dec		rsi
	jl		.exit
	mov		byte [rdi + rsi], 0
	jmp		.loop

	.exit:
		ret
