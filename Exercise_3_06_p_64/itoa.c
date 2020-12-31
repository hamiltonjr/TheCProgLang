#include "itoa.h"

/*
 * This function is a special case of itoa that adjust
 * width as a given value w.
 *
 * input..: integer number n to be converted and width w.
 * output.: string representation of n.
 */
void itoa(int n, char *s, int w)
{

    int i = 0, sign;

    // build string representation
    if ((sign = n) < 0)
    {
        n = -n;
    }

    do
    {
        *(s + i++) = n % BASE + '0';
    } while ((n /= BASE) > 0);

    if (sign < 0)
    {
        *(s + i++) = '-';
    }

    *(s + i) = '\0';

    // adjust width
    int len = w - strlen(s);
    if (len > 0)
    {
        for (register size_t i = 0; i < len; ++i)
        {
            strcat(s, " ");
        }
    }

    reverse(s);

}

