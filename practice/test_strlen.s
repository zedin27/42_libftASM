section     .text
global      main                            ; must be declared for linker (ld)

section     .data
msg     db  'Hello, world!', 0xa, 0x0       ; our dear string

main:                                       ; gcc entry point

    push    msg
    call    strlen
    add     esp, 4                          ; kasi esp duk kat position awal2 dia balik (clear stack)

    mov     edi, eax                        ; simpan length 'msg' string, xleh stay dalam eax sbb jpgi eax nk guna untuk simpan kod write syscall

    mov     eax, 4                          ; system call number (sys_write)
    mov     ebx, 1                          ; stdout file descriptor
    mov     ecx, msg                        ; void *buf
    mov     edx, edi                        ; size_t count
    int     0x80                            ; invoke syscall

    mov     eax,1                           ; system call number (sys_exit)
    int     0x80                            ; call kernel

    ret

strlen:

    push    ebp
    mov     ebp, esp

    ; preverse required registers value into stack (one of cdecl rules)
    push    edi                             ; for storing str pointer
    push    ecx                             ; strlen counter

    mov     edi, [ebp + 8]                  ; ambik pointer dari parameter
    mov     eax, 0                          ; nk cari character null terminator
    mov     ecx, 0xFFFFFFFF                 ; eq to -1
    repne   scasb                           ; loop through [ebp+8] string,, until found 0 (null terminator)
    mov     eax, ecx                        ; return counter as ecx (one of cdecl rules)

    neg     eax                             ; convert -ve eax (2's complement) jadi number positive biasa

    ; give back our previous used registers
    pop     ecx
    pop     edi

    pop     ebp
    ret
