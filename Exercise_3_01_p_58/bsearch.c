#include "bsearch.h"

/*
 * This function is the implementation fo binary
 * search. The array must be sorted.
 *
 * input..: element x, arrayv and number of elements 
 * of array (the size).
 * output.: position of x in v or -1 if the element 
 * is not in v.
 */
int bsearch(int x, int *v, int n)
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

