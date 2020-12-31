#include "utils.h"

/*
 * This function is a comparison method for
 * quicksort algorithm.
 */
int compare(const char *s1, const char* s2)
{

    if (folded)
    {
        lower(s1);
        lower(s2);
    }

    if (reversed)
    {
        return strcmp(s1, s2);
    } else
    {
        return (-1) * strcmp(s1, s2);
    }

}

