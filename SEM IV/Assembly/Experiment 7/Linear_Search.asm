section .data
    inputMsg db 'Enter the key value : '
    lenInputMsg equ $-inputMsg

    foundMsg db 'Element found at index : '
    lenFoundMsg equ $-foundMsg
    
    notFoundMsg db 'Element not present in the array'
    lenNotFoundMsg equ $-notFoundMsg
    
    array db 1, 2, 3, 4, 5
    
section .bss
    index resb 1
    key resb 1

section .text
    global _start
    
%macro read 2
    pusha
    mov eax, 3
    mov ebx, 0
    mov ecx, %1
    mov edx, %2
    int 80h
    popa
%endmacro
    
%macro write 2
    pusha
    mov eax, 4
    mov ebx, 1
    mov ecx, %1
    mov edx, %2
    int 80h
    popa
%endmacro

_start:
    write inputMsg, lenInputMsg
    read key, 1
    mov al, [key]
    sub al, '0'
    mov cl, 5 ; 5 Elements in the array
    mov dl, 0 ; Holds the current index position
    mov esi, array
    linear:
        mov bl, [esi]
        cmp al, bl
        je found
        inc esi
        inc dl
        loop linear
    write notFoundMsg, lenNotFoundMsg
    jmp exit
    
    found: 
        write foundMsg, lenFoundMsg
        add dl, '0'
        mov [index], dl
        write index, 1
        
    exit:
        mov eax, 1
        int 80h