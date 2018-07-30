[bits 64]

global _ft_strdup
section .text

extern _malloc
extern _free
extern _ft_strlen

; char *ft_strdup(const char *src)
_ft_strdup:
	xor rax, rax				; negating the rax value
	mov r13, rdi				; store our rdi into temp register r13
	call _ft_strlen				; call our ft_strlen function to get the size

	mov r12, rax				; store our rax into another temporary register
	mov rdi, r12				; store r12 into our destination register and push
	push rdi
	call _malloc				; allocate enough space x amount of bytes

	pop rdi						; once space is allocated, take it out
	mov r14, rax				; putting new rax into another temp register
	cmp r14, 0					; compare r14 with NULL and end it if so
		je .end
	mov r15, r14				; otherwise, replace r15 with r14
	.loop_start:
		cmp r12, 0				; check every single r12 byte until NULL
		je  .finish_loop

	mov bl, byte [r13]			; storing byte r13 into bl
	mov byte [r14], bl			; moving our new bl into byte r14
	dec r12						; r12--
	inc r13						; r13++
	inc r14						; r14++
		jmp .loop_start			; go back to the loop_start label

	.finish_loop:
		mov byte [r14], 0		; replace every r14 byte with NULL
		mov rax, r15			; put r15 into our rax
		ret						; return once everything is successful

		.end:					; otherwise, return nothing
			mov rax, 0
			ret
