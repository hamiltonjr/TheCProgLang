#include "strutil.h"
#define MAXSTR 50

int main()
{

    char s[MAXSTR] = "Hello ";
    char t[MAXSTR] = "world!";

    printf("\n\tBefore concatenation of t in s...\n");
    printf("\ts = %s\n", s);
    printf("\tt = %s\n", t);

    strcat(s, t);

    printf("\n\tAfter concatenation of t in s...\n");
    printf("\ts = %s\n", s);
    printf("\tt = %s\n\n", t);

    return EXIT_SUCCESS;

}

