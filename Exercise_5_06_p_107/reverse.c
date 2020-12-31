#include "utils.h"
#define MAXLINE 1000
#define swap(x, y) { char aux = x; x = y; y = aux; }

void reverse(char *s)
{
    char *r = s;

    // find end of r
    while (r && *r) ++r;

    // reverse
    for (--r; s < r; ++s, --r)
        swap(*s, *r);

}

