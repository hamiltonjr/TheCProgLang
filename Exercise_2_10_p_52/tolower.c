#include "lower.h"

/*
 * This function changes all letters of a string to
 * lowercase.
 *
 * input..: a string possibly with some uppercase 
 * letters.
 * output.: a string with all letter in lowercase.
 */
void tolower(char *s)
{

    size_t len = strlen(s);
    
    for (register size_t i = 0; i < len; ++i)
    {
        *(s + i) = lower(*(s + i));
    }

}

