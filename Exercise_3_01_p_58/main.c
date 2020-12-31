#include "bsearch.h"
#define SZ 11

/*
 * Testing bsearch() function.
 */
int main()
{

    int v[] = { 2, 3, 6, 7, 9, 13, 13, 21, 37, 49, 81, 98 };
    int elem1 = 13;
    int elem2 = 15;
    int r;

    printf("\n\tArray: ");
    print(v, SZ);

    r = bsearch(elem1, v, SZ);
    printf("\n\n\tElement %3d is in array?: %s pos = %3d\n", 
            elem1, (r>=0) ? "yes" : " no", r);

    r = bsearch(elem2, v, SZ);
    printf("\tElement %3d is in array?: %s pos = %3d\n\n", 
            elem2, (r>=0) ? "yes" : " no", r);


    return EXIT_SUCCESS;

}

