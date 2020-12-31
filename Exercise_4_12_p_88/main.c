#include "itoa.h"

int main()
{

    char s[5];
    int n = 256;

    printf("\n\tPrinting n (number)...: %d\n", n);

    itoa_(s, n);
    printf("\tPrinting s (string)...: %s\n\n", s);

    return EXIT_SUCCESS;

}

