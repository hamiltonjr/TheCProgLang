#include "trailing.h"

int getline(char *line, int lim)
{

    register size_t i = 0, j = 0;
    int prev = 0, c = 0;

    // keep track previous character for skip of
    // trailing spaces in input
    for ( ; i < lim-1 && (c=getchar()) != EOF && c != '\n'; ++i)
    {
        // include current character only if not trailing spaces
        if (!(isspace(c) && isspace(prev)))
        {
            *(line + j) = c;
            ++j;
        }
        prev = c;
    }

    // include \n in the line only if line is not empty
    if ((c == '\n') && (j > 0))
    {
        *(line + j) = c;
        ++j;
    }
    *(line + j) = '\0';

    // blank lines (just \n) must be ignored
    if (j == 0 && c != EOF && i < lim-1)
    {
        return -1;
    }

    return j;

}

