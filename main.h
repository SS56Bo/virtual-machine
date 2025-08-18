/* main header file */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

typedef short int int16;
typedef long int int32;

typedef struct stack_reg {
    int16 AX;
    int16 BX;
    int16 CX;
    int16 DX;
    int32 SP; // Stack Pointer - might have to change that
    int32 PC; // Program Counter - might have to attach a struct to this
}Register;

typedef enum {
    MOV=0x01,
    ADD=0x02,
    DIFF=0x03,
    MULT=0x04,
}Opcode;

/* For our instruction set, we can define a struct which in turn will 
 * use our Register and our Opcode enum to spurt out results.
 * Example: Writing a simple 
 *          MOV AX,BX will transfer the files from BX to AX
 * Example #2: Writing a simple
 *             ADD AX, 02. Will add +2 to the register.
 *          Or,ADD AX, BX, will add the contents of register BX to AX
 */
