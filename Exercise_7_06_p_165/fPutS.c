#include <stdio.h>
/**
 * This function put a string on stdout.
 */
int fPutS(char *s, FILE *iop)
{
    register int c;

    while (c = *s++)
    {
        putc(c, iop);
    }

    return ferror(iop) ? EOF : 0;
}
