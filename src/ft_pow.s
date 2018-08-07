[bits 64] ; dont use this file

global _ft_pow
section .text

_ft_pow:
        test    esi, esi
        jle     .LBB0_1
        mov     ecx, 1
        mov     eax, 1
.LBB0_3:
        test    sil, 1
        mov     edx, edi
        cmove   edx, ecx
        imul    eax, edx
        imul    edi, edi
        shr     2
        jne     .LBB0_3
        ret
.LBB0_1:
        mov     eax, 1
        ret
