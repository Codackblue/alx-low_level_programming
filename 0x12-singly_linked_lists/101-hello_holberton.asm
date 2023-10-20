global main
extern printf

main:
    mov edi, format   ; address
    xor eax, eax      ; eax reg
    call printf       ; printf
    mov eax, 0        ; return success
    ret
format: db `Hello, Holberton\n`,0
