#include "gt80.h"

int getline(char *line, int lim)
{

    register size_t i;
    int c = 0;

    for (i = 0; i < lim-1 && (c=getchar()) != EOF && c != '\n';++i)
    {
        *(line + i) = c;
    }

    if (c == '\n')
    {
        *(line + i) = c;
        ++i;
    }
    *(line + i) = '\0';

    return i;

}

