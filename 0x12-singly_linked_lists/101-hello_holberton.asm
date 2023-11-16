section .data
    hello db 'Hello, Holberton', 0xA

section .text
    global main
    extern printf

main:
    push    rbp
    mov     rdi, hello
    call    printf
    mov     eax, 0
    pop     rbp
    ret

