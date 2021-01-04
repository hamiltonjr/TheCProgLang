#include "bits.h"

/*
 * This code shows the effect of  x & (x - 1).  The  rightmost
 * bit of even integer is  0  and of odd number is 1: when the
 * combination of x and  x - 1,  always even and odd integers,
 * & implies in a 1 & 0  or  0 & 1 bit operation and it always
 * becomes 0.
 *
 * The binary representation  of  integers always hepls to see
 * how bitwise  operations  works. Then, the binary() function
 * was included to allow print all the integers here in binary
 * form.
 */
int main()
{
    int x = 0b10010101;
 
    printf("\n\tThis code counts bits of a number:\n\n");
    printf("\tdec x = %d\n", x);
    printf("\tbin x = ");
    binary(x);
    printf("\n\tcounter = %d\n\n", bitcount(x));

    return EXIT_SUCCESS;
}
