#include "bsearch.h"

/*
 * This function is the implementation fo binary
 * search. The array must be sorted. This version
 * of binary search has one test inside the loop.
 */
int fast_bsearch(int x, int *v, int n)
{
    int low = 0, high = n - 1;
    int mid = (low + high) / 2;

    while (low <= high && x != v[mid])
    {
        if (x < v[mid])
        {
            high = mid - 1;
        } else
        {
            low = mid + 1;
        }
        
        mid = (low + high) / 2;
    }

    return (x == v[mid]) ? mid : -1;
}
