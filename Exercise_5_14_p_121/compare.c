#include "utils.h"

/*
 * This function is a comparison method for
 * quicksort algorithm.
 */
int compare(char *s1, char* s2)
{
    if (folded)
    {
        lower(s1);
        lower(s2);
    }

    if (reversed)
    {
        return (-1) * strcmp(s1, s2);
    } else
    {
        return strcmp(s1, s2);
    }
}
