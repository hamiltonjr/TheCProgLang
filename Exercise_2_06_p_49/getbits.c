#include "bits.h"

/*
 * This function gets a group of bits of an integer number.
 *
 * input..: number x, position p, number of bits n.
 * output.: integer number wtih desired rightmost bits.
 */
unsigned getbits(unsigned x, int p, int n)
{

    return (x >> (p+1-n)) & ~(~0 << n);

}

