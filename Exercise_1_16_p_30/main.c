#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../lib/utils.h"
#define MAXLINE 1024

/**
 * This program reads a text and shows the longest line.
 */
int main()
{
    char line[MAXLINE];
    char longest[MAXLINE];
    int len = 0, max = 0;

    // catching lines and searching longest
    while ((len = getLine(line, MAXLINE)) > 0)
    {
        if (len > max)
        {
            max = len;
            strcpy(longest, line);
        }
    }

    // output
    if (max > 0)
    {
        printf("\n[%d] %s\n", max, longest);
    }

    return EXIT_SUCCESS;
}
