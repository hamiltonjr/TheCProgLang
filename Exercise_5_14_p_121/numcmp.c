#include "utils.h"

/*
 * This function is a comparison method for 
 * quicksort algorithm. It consider reversed
 * case too.
 */
int numcmp(char *s1, char *s2)
{
    double v1 = atof(s1);
    double v2 = atof(s2);

    if (reversed)
    {
        if (v1 > v2)
            return -1;
        else if (v1 < v2)
            return 1;
        else
            return 0;
    } else
    {
        if (v1 < v2)
            return -1;
        else if (v1 > v2)
            return 1;
        else
            return 0;
    }
}
