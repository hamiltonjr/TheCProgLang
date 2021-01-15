#include "utils.h"

/**
 * 
 */
void writeLines(char lineptr[][MAXLEN], int nlines)
{
    while (nlines-- > 0)
    {
        printf("%s\n", *lineptr++);
    }
    printf("\n");
}
