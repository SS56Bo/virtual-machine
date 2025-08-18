/* main header file */
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

void hello_string() {
    printf("Hello world\n");
}

typedef long int int32;

typedef struct stack_reg {
    int32 AX;
    int32 BX;
    int32 CX;
    int32 DX;
    int32 SP; // Stack Pointer - might have to change that
    int32 PC; // Program Counter - might have to attach a struct to this
}Register;
