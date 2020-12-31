#include "itoa.h"

/*
 * This function reverses a string in place.
 *
 * input..: string s to be converted 
 * output.: string s (result).
 */
void reverse(char *s)
{

    int len = strlen(s) - 1;
    int c;

    for (register size_t i = 0, j = len; i < j; i++, j--)
    {
        c = *(s + i);
        *(s + i) = *(s + j);
        *(s + j) = c;
    }

}

