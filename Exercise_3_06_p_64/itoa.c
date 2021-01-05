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

    // manage signal
    if ((sign = n) < 0)
    {
        n = -n;
    }

    // separate in digits under base BASE
    do
    {
        *(s + i++) = n % BASE + '0';
    } while ((n /= BASE) > 0);

    // add signal to number
    if (sign < 0)
    {
        *(s + i++) = '-';
    }

    // close string number representation
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

    // correct order
    reverse(s);
}
