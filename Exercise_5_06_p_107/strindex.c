#include "utils.h"
#define MAX 50

size_t strindex(char *s, char *t)
{
    char *i, *j, *k;

    for (i = s; *i != '\0'; i++)
    {
        for (j = i, k = t; *k != '\0' && *j == *k; j++, k++);
        if ((size_t)(k - t) > 0 && *k == '\0')
        {
            return (size_t)(i - s);
        }
    }

    return -1;
}
