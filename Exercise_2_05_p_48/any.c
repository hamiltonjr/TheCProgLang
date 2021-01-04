#include "any.h"

/*
 * This function searches all characters of s2 for matching
 * with characters of s1. it is similat to library function 
 * strpbkr() (that returns a pointer to the position).
 *
 * input..: strings s1 and s2.
 * output.: position in s1 of first matching with caharcetr 
 * of s2.
 */
int any(char *s1, char *s2)
{
    register size_t i = 0, j = 0;
    int len1 = strlen(s1);
    int len2 = strlen(s2);

    // separate one character of s1 for comparisons
    // with all characters of s2
    while (j < len2)
    {
        // compares all characters of s2 with one 
        // separated character of s1
        while (i < len1)
        {
            // match returns position
            if (*(s1 + i) == *(s2 + j))
            {
                return i;
            }
            i++;
        }
        j++;
    }

    // if ran all string, no matching
    return -1;
}
