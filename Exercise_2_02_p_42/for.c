#include <stdio.h>
#include <stdlib.h>
#define LIMIT 1024

/**
 * This program implements a simple for-loop.
 */
int main()
{
    register size_t i;
    int c;

    printf("\n");
    for (i = 0; i < LIMIT - 1; ++i)
    {
        if ((c = getchar()) == '\n')
            break;

        if (c == EOF)
            break;

        putchar(c);
    }
    printf("\n\n");

    return EXIT_SUCCESS;
}
