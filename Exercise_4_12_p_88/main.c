#include <stdio.h>
#include <stdlib.h>

// prototype
void i2a(char*, int);

int main()
{
    char s[5];
    int n = 256;

    printf("\n\tPrinting n (number)...: %d\n", n);

    i2a(s, n);
    printf("\tPrinting s (string)...: %s\n\n", s);

    return EXIT_SUCCESS;
}
