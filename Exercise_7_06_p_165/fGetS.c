#include <stdio.h>
/**
 * This function get a string from stdin.
 */
char* fGetS(char *s, int n, FILE *iop)
{
    register char *cs;
    register int c;

    cs = s;
    while (--n > 0 && (c = getc(iop)) != EOF)
    {
        if ((*cs++ = c) == '\n')
        {
            break;
        }
    }

    *cs = '\0';
    return (c == EOF && cs == s) ? NULL : s;
}
