#include "../lib/utils.h"

/*
 * This function return the first occurrence of a
 * pattern.
 */
int strIndex(char *s, char *t)
{
    register size_t i, j, k;

    // run string
    for (i = 0; *(s + i) != '\0'; ++i)
    {
        // search pattern
        for (j = i, k = 0; 
            *(t + k) != '\0' && *(s + j) == *(t + k);
            ++j, ++k);

        // if pattern
        if (k > 0 && *(t + k) == '\0')
        {
            return i;
        }
    }

    return -1;
}
