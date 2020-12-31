#include <stdio.h>
#include <stdlib.h>
#define LIMIT 1035

int main()
{

    register size_t i;
    int c;

    for (i = 0; i < LIMIT - 1; ++i)
    {
        if ((c = getchar()) == '\n')
            break;

        if (c == EOF)
            break;

        putchar(c);
    } 
    printf("\n");


    return EXIT_SUCCESS;

}

