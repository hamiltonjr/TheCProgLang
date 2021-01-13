#include "bsearch.h"

/*
 * This function prints an array of integers.
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
