#include "utils.h"

/*
 * This is a function that get a line text from stdin.
 */

int getline(char *s, int lim)
{
    char *p;
    int c;

    p = s;
    while (--lim > 0 && (c = getchar()) != EOF && c != '\n')
    {
        *p++ = c;
    }

    if (c == '\n')
    {
        *p++ = c;
    }
    *p = '\0';
 
    return (int)(p - s);
}
