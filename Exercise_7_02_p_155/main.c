#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define MAXCOLS 80

int main()
{
    int c, columns = 0;

    printf("\n");
    while ((c = getchar()) != EOF)
    {
        if (isprint(c))
        {
            printf("%c", c);
            columns++;
        } else
        {
            printf("[0x%02X]", c);
            columns += 6;
        }

        if (c == '\n' || columns >= MAXCOLS)
        {
            printf("\n");
            columns = 0;
        }

        if (c == '\t')
        {
            printf("\t");
        }
    }
    printf("\n");

    return EXIT_SUCCESS;
}
