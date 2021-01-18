#include <stdio.h>
#include <stdlib.h>
#include "../lib/utils.h"
#define MAXLINE 1024

/**
 * getline() used here is of utils.a library.
 */
int main()
{
    char line[MAXLINE];

    // catching lines
    while (getLine(line, MAXLINE))
    {
        reverse(line);
        printf("\t%s", line);
    }
    printf("\n\n");

    return EXIT_SUCCESS;
}
