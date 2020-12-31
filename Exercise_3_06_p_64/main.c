#include "itoa.h"

/*
 * Testing special itoa() function.
 */
int main()
{

    int n = 1234;
    char s[10];

    printf("\n\tThis is a number: %d\n", n);
    itoa(n, s, 6);
    printf("\tThis is a string: |%s|\n\n", s);

    return EXIT_SUCCESS;

}

