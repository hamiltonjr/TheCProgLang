#include <stdio.h>
#include <stdlib.h>

/*
 * Testing special itoa() function.
 */

// prototype
void i2aw(int, char*, int);

int main()
{
    int n = 1234;
    char s[10];

    printf("\n\tThis is a number: %d\n", n);
    i2aw(n, s, 6);
    printf("\tThis is a string: |%s|\n\n", s);

    return EXIT_SUCCESS;
}
