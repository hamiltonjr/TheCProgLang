#include "itoa.h"

/*
 * This function reverses a string.
 *
 * input..: a string to be reversed.
 * output.: in the same string, the reverse changes 
 * its content.
 */
void reverse(char *s)
{

    int len = strlen(s) - 1, c;

    for (register size_t i = 0, j = len; i < j; i++, j--)
    {
        c = *(s + i);
        *(s + i) = *(s + j);
        *(s + j) = c;
    }

}

