#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * This program still not works properly. It already 
 * handle # and _ properly, but string constants are
 * not handled like desired.
 */

// prototype
int getword(char*, int);
char w_token[100];

int main()
{
    int c;

    while ((c = getword(w_token, 100)) != EOF)
    {
        printf("%s\n", w_token);
    }

    return EXIT_SUCCESS;
}
