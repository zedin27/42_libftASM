[bits 64]

global _ft_cat
%define SYS_READ 0x2000003
%define SYS_WRITE 0x2000004
%define STDOUT 0x01
%define BUFF_SIZE 0xff

section			.bss
	buffer		resb		BUFF_SIZE		; unitialised storage space, basically reserving BUFF_SIZE bytes

section			.text

; int				ft_cat(int fd);
_ft_cat:
	xor		rax, rax
	push	rbp
	mov		rbp, rsp

	.read:
		push	rdi					; push rdi stack first before we start reading
		lea		rsi, [rel buffer]
		mov		rdx, BUFF_SIZE
		mov		rax, SYS_READ 		; read
		syscall
		jc		end					; jump carry
		cmp		rax, 0
		jle		end
	.write:
		mov		rdi, STDOUT			; output fd
		mov		rdx, rax			; store the destination of rax
		mov		rax, SYS_WRITE		; write
		syscall
		pop		rdi					; take out our initial rdi stack
		jmp		.read				; read again

	end:
		mov		rsp, rbp
		pop		rbp
		ret
