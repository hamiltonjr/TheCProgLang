#include "utils.h"

/*
 * This function converts an integer number for its string
 * representation. 
 */

void itoa(int n, char *s)
{

    int sign;

    if ((sign = n) < 0)
    {
        n = -n;
    }

    // adjusting in case of n = INT_MIN
    *s++ = n % BASE + '0';
    while ((n /= BASE) > 0)
    {
        *s++ = n % BASE + '0';
    }

    if (sign < 0)
    {
        *s++ = '-';
    }

    *s = '\0';
    reverse(s);

}

