mov A, r0 ; Copy the content of register R0 into the accumulator (A)
mov B, r1 ; Copy the content of register R1 into register B

; Divide the content of the accumulator (A) by the content of register B
; The quotient will be stored in the accumulator (A), and the remainder will be stored in register B
div ab

mov r2, A ; Store the quotient (result of division) from the accumulator into register R2
mov r3, B ; Store the remainder from register B into register R3
