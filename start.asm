bits 32
global _start
extern main

section .text
_start:
    cli
    mov esp, stack
    call main
    hlt

section .bss
resb 8192
stack:

