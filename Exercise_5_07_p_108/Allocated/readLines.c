#include <stdio.h>
#include <string.h>
#define MAXLEN     1000

// prototype(s)
int getLine(char*, int);
char* alloc(int);

int readLines(char *lineptr[], int maxlines)
{
    int len, nlines = 0;
    char *p, line[MAXLEN];

    while ((len = getLine(line, MAXLEN)) > 0)
    {
        if (nlines >= maxlines || (p = alloc(len)) == NULL)
        {
            return -1;
        } else
        {
            line[len - 1] = '\0';
            strcpy(p, line);
            lineptr[nlines++] = p;
        }
    }

    return nlines;
}
