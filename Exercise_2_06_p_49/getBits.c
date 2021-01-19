#include "bits.h"

/*
 * This function gets a group of bits of an integer number.
 */
unsigned getBits(unsigned x, int p, int n)
{
    return (x >> (p+1-n)) & ~(~0 << n);
}
