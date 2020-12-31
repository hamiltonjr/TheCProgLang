#include "utils.h"

/*
 * This function is a comparison method for
 * quicksort algorithm.
 */
int strcmp_r(const char *s1, const char* s2)
{

    char r1[MAXLEN];
    char r2[MAXLEN];

    if (folded)
    {
        lower_copy(r1, s1);
        lower_cpoy(r2, s2);
        return (-1) * strcmp(r1, r2);
    } else
    {
        return (-1) * strcmp(s1, s2);
    }

}

