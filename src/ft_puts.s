[bits 64]

global _ft_puts
section .data
	msg:	db	`\n`
section .text

%define SYS_WRITE 0x2000004
%define SYS_EXIT 0x2000001
%define NULL 0x00
%define STDOUT 0x01

;int ft_puts(const char *str);
_ft_puts:
	xor		rax, rax		; resets rax value to 0
	mov		r8, rdi			; because we have 15 registers,
							; r8 to r15 are temporary registers. The rdi will
							; have the
							; message that is getting passed

	.loop:
		cmp	byte [r8], NULL	; is rdi == NULL?
		je	.newline		; if so, jump end to newline label
		mov	rax, SYS_WRITE	; write syscall passes into rax ""
		mov	rdi, STDOUT		; output
		mov	rsi, r8			; the string size will be from our
							; temporary register r8
		mov	rdx, 1
		inc	r8				; increase the string size + 1
		syscall				; kernel call
		jmp	.loop			; and jump back to loop until
							; it is over

	.newline:
		mov	rax, SYS_WRITE	; write into rax ""
		mov	rdi, STDOUT		; load byte
		mov	rsi, msg		; append newline into the
							; terminating string
		mov	rdx, STDOUT		; output
		syscall
	.exit:
		ret
