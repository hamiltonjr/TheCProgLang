#include "strutil.h"
#define MAXSTR 50

int main()
{
    char s[MAXSTR] = "Hello ";
    char t[MAXSTR] = "World Wide Web";
    int n = 5;

    printf("\n\tComparing using strncmp()...\n");
    printf("\t%s == %s?: %s\n", s, t, 
            (strncmp(s, t, strlen(t)) == 0) ? "yes" : "no");

    printf("\n\tBefore strncat()...\n");
    printf("\ts = %s\n", s);
    printf("\tt = %s\n", t);
    strncat(s, t, n);
    printf("\n\tAfter strncat() with n = %d...\n", n);
    printf("\ts = %s\n", s);
    printf("\tt = %s\n\n", t);

    printf("\n\tCopying t to s...\n");
    strncpy(s, t, n);
    printf("\ts = %s\n", s);
    printf("\tt = %s\n", t);


    printf("\n\tComparing using strncmp()...\n");
    printf("\t%s == %d first characters of %s?: %s\n", s, n, t, 
            (strncmp(s, t, n) == 0) ? "yes" : "no");

    printf("\n");
    return EXIT_SUCCESS;
}
