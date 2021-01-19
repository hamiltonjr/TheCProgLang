#include "bits.h"

/*
 * This function prints an integer number in binary
 * representation.
 */
void binary(int n)
{
    if (n == 0) return;
    binary(n / 2);
    printf("%d", n % 2);
}
