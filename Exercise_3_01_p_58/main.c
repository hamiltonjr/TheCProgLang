#include "bsearch.h"
#include <time.h>
#define SZ 12

/*
 * Testing bsearch() and fast_bsearch() functions.
 * Difference of performance is circa 10%.
 */

int main()
{
    int v[] = { 2, 3, 6, 7, 9, 13, 13, 21, 37, 49, 81, 98 };
    int elem1 = 13;
    int elem2 = 15;
    clock_t b, e;
    int r;

    printf("\n\tArray: ");
    print(v, SZ);

    // binary search
    b = clock();
    r = bsearch(elem1, v, SZ);
    printf("\n\n\tElement %3d is in array?: %s\n", 
            elem1, (r>=0) ? "yes" : " no");

    r = bsearch(elem2, v, SZ);
    printf("\tElement %3d is in array?: %s\n\n", 
            elem2, (r>=0) ? "yes" : " no");
    e = clock();

    printf("Binary search  processing time: %ld ms.\n", e - b);
    
    // fast binary search
    b = clock();
    r = fast_bsearch(elem1, v, SZ);
    printf("\n\n\tElement %3d is in array?: %s\n", 
            elem1, (r>=0) ? "yes" : " no");

    r = fast_bsearch(elem2, v, SZ);
    printf("\tElement %3d is in array?: %s\n\n", 
            elem2, (r>=0) ? "yes" : " no");
    e = clock();

    printf("Fast binary search  processing time: %ld ms.\n", e - b);

    return EXIT_SUCCESS;
}
