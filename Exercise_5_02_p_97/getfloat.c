#include "gets.h"

/*
 * This function implements a floatting-point numbers input.
 * It is similar to getint() already implemented.
 *
 * input/output: double value pd.
 */
double getfloat(double *pd)
{
    double power;
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
    
    // get integral part
    for (*pd = 0; isdigit(c); c = getch())
    {
        *pd = 10 * *pd + (c - '0');
    }

    // accept dot (decimal point) and continue
    if (c == '.')
    {
        c = getch();
    }

    // get fractional part
    power = 1.0;
    for ( ; isdigit(c); c = getch())
    {
        *pd = 10 * *pd + (c - '0');
        power *= 10;
    }

    // calculate numeric representation
    *pd *= sign / power;

    // handle EOF
    if (c != EOF)
    {
        ungetch(c);
    }

    return c;
}
