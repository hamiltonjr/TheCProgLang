#include "utils.h"

int atoi(char *s)
{
    int n, sign;

    // skip spaces
    for ( ; isspace(*s); s++);

    // determine signal
    sign = (*s == '-') ? -1 : 1;
    if (*s == '+' || *s == '-')
    {
        s++;
    }

    // build number
    for (n = 0; isdigit(*s); s++)
    {
        n = BASE * n + (*s - '0');
    }

    return sign * n;
}
