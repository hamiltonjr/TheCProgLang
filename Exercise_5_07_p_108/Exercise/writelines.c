#include "utils.h"

void writelines(char lineptr[MAXLINES][MAXLEN], int nlines)
{

    while (nlines-- > 0)
    {
        printf("%s\n", *lineptr++);
    }
    printf("\n");

}

