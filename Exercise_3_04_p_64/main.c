#include <stdio.h>
#include <stdlib.h>
#include "../lib/utils.h"

/*
 * Testing itoa() function in a special case.
 */

int main()
{
    char s[20];

    // common case (close to special)
    printf("\n\tMake operation with n = INT_MIN - 1:\n");
    printf("\tIt is a number: %d\n", INT_MIN+1);
    i2a(INT_MIN+1, s);
    printf("\tIt is a string: %s\n\n", s);

    // special case: n = INT_MIN
    printf("\n\tMake operation with n = INT_MIN:\n");
    printf("\tIt is a number: %d\n", INT_MIN);
    i2a(INT_MIN, s);
    printf("\tIt is a string: %s\n\n", s);

    // the end
    printf("\tIt is all right in both cases!\n\n");
    return EXIT_SUCCESS;
}
