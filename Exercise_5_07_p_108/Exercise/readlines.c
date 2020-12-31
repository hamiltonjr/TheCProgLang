#include "utils.h"

int readlines(char lineptr[MAXLINES][MAXLEN], int maxlines)
{

    int len, nlines = 0;
    char line[MAXLEN];

    while ((len = getline(line, MAXLEN)) > 0)
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

