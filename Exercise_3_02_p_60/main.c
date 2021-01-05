#include "visible.h"
#define MAXLEN 100

/*
 * Testing escape() and unescape().
 */

int main()
{
    char t[MAXLEN], s[MAXLEN], r[MAXLEN];
    sprintf(t, "%s\t%s\t%s\b\n", "a", "string", "test");

    printf("\n\tBefore............: %s", t);
    escape(s, t);
    printf("\tAfter escape()....: %s\n", s);
    unescape(r, s);
    printf("\tAfter unescape()..: %s\n", r);

    return EXIT_SUCCESS;
}
