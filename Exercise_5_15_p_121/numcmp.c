#include "utils.h"

/*
 * This function is a comparison method for 
 * quicksort algorithm.
 */
int numcmp(const char *s1, const char *s2)
{

    double v1 = atof(s1);
    double v2 = atof(s2);

    if (v1 < v2)
        return -1;
    else if (v1 > v2)
        return 1;
    else
        return 0;

}

