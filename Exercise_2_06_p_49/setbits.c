#include "bits.h"

/*
 * This function sets desired amount of bits in an integer 
 * number. 
 *
 * input..: number x, position p, number of bits n and number y
 * from what the bits will be copied to x.
 * output.: integer number with part of y copied to (the other 
 * bits are like on x and becomes unaltered.
 */
unsigned setbits(unsigned x, int p, int n, unsigned y)
{

    return (x & ~(~(~0 << n) << (p+1-n))) | 
        ( y & (~(~0 << n)) << (p+1-n));

}

