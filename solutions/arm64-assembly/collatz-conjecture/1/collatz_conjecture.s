// collatz_conjecture.s

// Implements Collatz conjecture

.equ ERROR_INVALID_NUMBER, -1
.equ INVALID, 0
.equ COUNTER_INIT, 0
.equ BASE_CASE, 1
.equ DIVISION_BASE, 1
.equ INCREMENT, 1
.equ IS_EVEN, 1
.equ FACTOR, 3

.global steps
steps:
    // x0 has the number (16)
    // x1 will be the step counter
    cmp x0, #INVALID                // is it 0?
    ble error                       // exits

    mov x1, #COUNTER_INIT           // counter = 0
    
loop:
    cmp x0, #BASE_CASE              // compares x0 to 1
    beq done                        // when equal, exits loop

    tst x0, #IS_EVEN                // is it even?
    beq even                        // if so, go to division

    mov x2, #FACTOR                 // stores the factor 3
    mul x0, x0, x2                  // multiplies
    add x0, x0, #INCREMENT          // adds 1

    add x1, x1, #INCREMENT          // counter++
    b loop                          // returns to loop    

even:    
    asr x0, x0, #DIVISION_BASE      // divides by 2
    
    add x1, x1, #INCREMENT          // counter++
    b loop                          // returns to loop
    
done:
    mov x0, x1                      // returns counter
    ret                             // farewell

error:
    mov x0, #ERROR_INVALID_NUMBER   // error message
    ret                             // bye

