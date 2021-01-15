#include "utils.h"

int readLines(char lineptr[][MAXLEN], int maxlines)
{
    int len, nlines = 0;
    char line[MAXLEN];

    while ((len = getLine(line, MAXLEN)) > 0)
    {
        if (nlines >= maxlines)
        {
            return -1;
        } else
        {
            line[len - 1] = '\0';
            strcpy(lineptr[nlines++], line);
        }
    }

    return nlines;
}
