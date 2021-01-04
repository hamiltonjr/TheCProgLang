#include "bits.h"

/*
 * This function counts bits of an unsgned integer.
 */
size_t bitcount(unsigned x)
{
    size_t b = 0;

    while (x)
    {
        b++;
        x &= x - 1;
    }

    return b;
}
