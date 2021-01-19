#include <string.h>

/*
 * This function searches all characters of s2 for matching
 * with characters of s1. It is similat to library function 
 * strpbkr() (that returns a pointer to the position).
 */
int any(char *s1, const char *s2)
{
    int len1 = strlen(s1);
    int len2 = strlen(s2);

    // separate one character of s1 for comparisons
    // with all characters of s2
    register size_t i = 0;
    while (i < len1)
    {
        // compares all characters of s2 with one 
        // separated character of s1
        register size_t j = 0;
        while (j < len2)
        {
            // match returns position
            if (*(s1 + i) == *(s2 + j))
            {
                return i;
            }
            j++;
        }
        i++;
    }

    // if ran all string, no matching
    return -1;
}
