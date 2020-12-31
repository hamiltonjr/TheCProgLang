#include "longest.h"

void copy(char *to, char *from)
{

    register size_t i = 0;
    while ((to[i] = from[i]) != '\0')
    {
        ++i;
    }

}

