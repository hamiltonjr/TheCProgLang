#include <stdio.h>
#include <stdlib.h>
#include "../lib/utils.h"

/*
 * Testing itob() function.
 */
int main()
{
    int n = 160;
    char s[10];

    printf("\n\tThis is a number..: %d\n", n);
    i2b(n, s, 10);
    printf("\tBase 10...........: %s\n", s);
    i2b(n, s, 2);
    printf("\tBase 2............: %s\n", s);
    i2b(n, s, 8);
    printf("\tBase 8............: %s\n", s);
    i2b(n, s, 16);
    printf("\tBase 16...........: %s\n\n", s);

    return EXIT_SUCCESS;
}
