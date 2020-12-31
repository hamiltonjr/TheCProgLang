#include "calc.h"

int getop(char s[])
{

    register size_t i = 0;
    int c;

    // skip initial spaces
    while ((s[0] = c = getch()) == ' ' || c == '\t');
    
    // non-digits (can be operators, spaces)
    if (!isdigit(c) && c != '.')
    {
        return c;
    }

    // integral part
    if (isdigit(c))
    {
        while (isdigit(s[++i] = c = getch()));
    }

    // fractional part
    if (c == '.')
    {
        while (isdigit(s[++i] = c = getch()));
    }
    s[i] = '\0';

    // return EOF to input
    if (c != EOF)
    {
        ungetch(c);
    }

    return NUMBER;

}

