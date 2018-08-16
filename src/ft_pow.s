section .data
formatfloatinput db "%lf", 0

section .text
global _ft_pow

_ft_pow:
    push rbp        ; maintain stack alignment
    mov r12, 3      ; fetch input into r12 here, use 3 as example
    neg r12         ; get -n
    add r12, 1023   ; add the double-precision exponent bias
    shl r12, 52     ; shift into place
    ; sign and mantissa are zero, we are done
    movq xmm0, r12
    mov rdi, formatfloatinput
    mov eax, 1
    xor eax, eax
    pop rbp
    ret
