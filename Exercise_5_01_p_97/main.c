#include "gets.h"

int main()
{

    int n;

    printf("\n");
    while (getint(&n) != EOF)
    {
        printf("\t%d\n", n);
    }
    printf("\n");

    return EXIT_SUCCESS;

}

