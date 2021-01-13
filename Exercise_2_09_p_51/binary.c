#include "bits.h"

/*
 * This function counts bits of an unsgned.
 *
 * input..: integer number.
 * output.: nothing (via stdout).
 */
void binary(int n)
{
    if (n == 0)
    {
        return;
    }

    binary(n / 2);
    printf("%d", n % 2);
}
