#include <stdio.h>

/**
 * 
 */
void writeLines(char *lineptr[], int nlines)
{
    while (nlines-- > 0)
    {
        printf("%s\n", *lineptr++);
    }
    printf("\n");
}
