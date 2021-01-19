#include "bits.h"

/*
 * This function sets desired amount of bits in an integer 
 * number. 
 */
unsigned setBits(unsigned x, int p, int n, unsigned y)
{
    return (x & ~(~(~0 << n) << (p+1-n))) | 
        ( y & (~(~0 << n)) << (p+1-n));
}
