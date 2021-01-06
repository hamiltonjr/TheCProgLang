#include <stdio.h>

void copy(char *to, const char *from)
{
    register size_t i = 0;
    while ((to[i] = from[i]) != '\0')
    {
        ++i;
    }
}
