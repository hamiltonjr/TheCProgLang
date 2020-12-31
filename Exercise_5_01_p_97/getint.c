#include "gets.h"

int getint(int *pn)
{

    int c, sign;

    // skip spaces
    while (isspace(c = getch()));

    // return strange characters
    if (!isdigit(c) && (c != EOF) && (c != '+') && (c != '-'))
    {
        ungetch(c);
        return EXIT_SUCCESS;
    }

    // determine number signal
    sign = (c == '-') ? -1 : 1;

    // accept signals and continue
    if (c == '+' || c == '-')
    {
        c = getch();
        while (!isdigit(c))
        {
            c = getch();
        }
    }
    
    // get the number
    for (*pn = 0; isdigit(c); c = getch())
    {
        *pn = 10 * *pn + (c - '0');
    }
    *pn *= sign;

    if (c != EOF)
    {
        ungetch(c);
    }

    return c;

}

