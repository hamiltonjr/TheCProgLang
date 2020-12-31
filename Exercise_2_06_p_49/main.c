#include "bits.h"

/*
 * Testing setbits() function.
 */
int main()
{

    // a simple example: the 4 rightmost zeroes of y wiil
    // stay in the 4 rightmost popsition of x
    int x = 0b11111111; // 255
    int y = 0b00000000; // 0
    int r = setbits(x, 3, 4, y); // 11110000 = 240
    
    printf("\n\tx = %d -> ", x);
    binary(x);
    printf("\n\ty = %d", y);
    printf("\n\tResult: %d -> ", r);
    binary(r);
    printf("\n\n");

    return EXIT_SUCCESS;

}

