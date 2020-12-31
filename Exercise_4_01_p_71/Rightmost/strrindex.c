#include "pattern.h"

/*
 * This function return sthe rightmost occurrence of a
 * pattern.
 *
 * input..: a string (line) and a pattern.
 * output.: index of occurrence.
 *
 * OBS: this function is different of strindex() function
 * because the outer loop rnn until the end for find the
 * rightmost occurrence of pattern.
 */
int strrindex(char *s, char *t)
{

    register size_t i, j, k;
    int index = -1;

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
            index = i;
        }
    }

    // if found, return result
    if (index > 0)
    {
        return index;
    } else
    {
        return -1;
    }

}

