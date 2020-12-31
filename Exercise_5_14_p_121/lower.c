#include "utils.h"

/*
 * This auxiliary function is used to turn letters to lowercase
 * for non case-sensitive comparisons.
 */
void lower(char *s)
{
    int len = strlen(s);

    while (--len >= 0)
    {
        *s++ = tolower(*s);
    }

}

