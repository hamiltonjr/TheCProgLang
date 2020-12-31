#include <stdio.h>
#include <stdlib.h>

// It is needed type a key for getchar() returns
// something. Then, the result printed is 1.

int main()
{
    printf("\n\t%d\n\n", (getchar() != EOF));    
    return EXIT_SUCCESS;
}
