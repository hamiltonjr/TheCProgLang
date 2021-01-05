#include "itob.h"

/*
 * This function converts an integer number for it string
 * representation in a given numerical base.
 *
 * input..: integer number n, string s (for output) and base b.
 * output.: string representation s.
 */
void itob(int n, char *s, int b)
{

    // digits of a base (index is the base)
    // It is limited between 2 and 16
    static char digits[16] = 
    {
        '0', '1', '2', '3', '4', '5', '6', '7', 
        '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'
    };
    int i = 0, sign;

    // manage signals
    if ((sign = n) < 0)
    {
        n = -n;
    }

    // separate digits
    do
    {
        int r = n % b;
        *(s + i++) = digits[r];
    } while ((n /= b) > 0);

    // add signal to number 
    if (sign < 0)
    {
        *(s + i++) = '-';
    }

    // close string number representation
    *(s + i) = '\0';

    // get number representation in correct order
    reverse(s);
}
