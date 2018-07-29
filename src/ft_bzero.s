; Tell compiler to use 64 bit code
[bits 64]

; Tell assembler what symbols (functions) to export
global _ft_bzero

; .text section is where all code lives
section .text

; unsigned ft_bzero(void *s, size_t n)
_ft_bzero:
	xor		rax, rax
	.start:
		cmp		rsi, rax				; compare rax to the src (rax==0)
		jz		.exit					; exit if the compare is zero

	dec		rsi							; decrease src
	mov		byte [rdi + rsi], 0			; sets '\0' to the memory of dst[src]
	jmp		.start						; once it finishes, jump to the label
										; .start

	.exit:
		ret
