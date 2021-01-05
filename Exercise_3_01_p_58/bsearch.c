#include "bsearch.h"

/*
 * This function is the implementation fo binary
 * search. The array must be sorted. 
 */
int bsearch(int x, int *v, int n)
{
    
    int low = 0, high = n - 1;
    int mid;

    while (low <= high)
    {
        mid = (low + high) / 2;

        if (x < v[mid])
        {
            high = mid - 1;
        } else if (x > v[mid])
        {
            low = mid + 1;
        } else
        {
            return mid;
        }        
    }

    return -1;
}
