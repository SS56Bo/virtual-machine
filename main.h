/* main header file */
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

void hello_string() {
    printf("Hello world\n");
}

typedef long int int32;

typedef struct stack_reg {
    int32 A;
    int32 B;
}Register;
