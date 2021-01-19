#include "../lib/utils.h"
#define BASE 10

/*
 * This function converts an integer number for its string
 * representation. 
 *
 * ONS: the maximum negative integer is known as INT_MAX
 * is built base in the INT_MAX:
 * Minimum and maximum values a `signed int' can hold.
 *  #  define INT_MIN   (-INT_MAX - 1)
 *  #  define INT_MAX   2147483647
 *
 * When itoa() calculates n = -n for change signal, the result
 * is an overflow. Solution is to face the number range under
 * other sight. It has a unreal asymmetry around 0 when we ob-
 * serve INT_MIN ... |0| ... INT_MAX. It  better  to  see the
 * range INT_MIN ...-1|0 ... INT_MAX with the  same  number of
 * numbers im both sides. It suggests a shift of 1 when  n  = 
 * INT_MIN, adjusted during the sum and string representation
 * composition. It avoid overflow. Then, only when n = INT_MIN, 
 * the signal change n = -n will be changed by n = -n - 1, what
 * is adjusted adding shift = 1 in the calculation beginning.
 * Any sum propagation will be correctly made: all the calcul-
 * ation is made from end to beginning, and it looks turn all
 * easy.
 */

void itoa(int n, char *s)
{
    int i = 0, sign;
    int shift;

    if ((sign = n) < 0)
    {
        // other calculation for n = INT_MIN
        if (n != INT_MIN)
        {
            n = -n;
            shift = 0;
        } else
        {    n = -n - 1;
            shift = 1;
        }
    }

    // adjusting in case of n = INT_MIN
    *(s + i++) = n % BASE + shift + '0';
    while ((n /= BASE) > 0)
    {
        *(s + i++) = n % BASE + '0';
    }

    if (sign < 0)
    {
        *(s + i++) = '-';
    }

    *(s + i) = '\0';
    reverse(s);
}
