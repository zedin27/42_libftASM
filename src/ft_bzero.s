; Tell compiler to use 64 bit code
[bits 64]

; Tell assembler what symbols (functions) to export
global _ft_bzero

; .text section is where all code lives
section .text

; unsigned ft_bzero(void *s, size_t n)
_ft_bzero:
