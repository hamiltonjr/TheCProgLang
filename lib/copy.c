#include <stdio.h>

/**
 * This function copies a string (from) to another (to).
 */
void copy(char *to, const char *from)
{
    register size_t i = 0;
    while ((to[i] = from[i]) != '\0')
    {
        ++i;
    }
}
