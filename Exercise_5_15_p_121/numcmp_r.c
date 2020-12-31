#include "utils.h"
/*
 * This function is a comparison method for 
 * quicksort algorithm.
 */
int numcmp_r(const char *s1, const char* s2)
{

    return (-1) * numcmp(s1, s2);

}

