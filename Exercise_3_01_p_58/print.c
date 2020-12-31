#include "bsearch.h"

/*
 * This function prints an array of integers.
 *
 * input..: array of integers v and its size n.
 * output.: via stdout.
 */
void print(int *v, int n)
{

    printf("[");
    for (register size_t i = 0; i < n; ++i)
    {
        printf("%s%d", (i == 0) ?  " " : ", ", v[i]);
    }
    printf("]");

}

