[bits 64]

global _ft_divide
section .text

; int32_t ft_divide(int32_t dividend, int32_t divisor)
_ft_divide:
	mov		eax, edi		; Get 32-bit dividend and
	cdq						; sign extend to 64-bit edx:eax

	idiv	esi				; divide

	and		rax, -1			; Force upper bits to zero,
							; probably not required, but nice.
	ret                     ; Return quotient in rax/eax.
