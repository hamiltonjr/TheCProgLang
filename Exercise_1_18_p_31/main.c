#include <stdio.h>
#include <stdlib.h>
#include "../lib/utils.h"
#define MAXLINE 1024

/** 
 * getline() used here is not default (from stabdard library)
 * but a similar in our utils.a library
 */ 
int main()
{
    char line[MAXLINE], trailed[MAXLINE];
    bool blanks = false;

    // catching lines 
    printf("\n");
    while (getLine(line, MAXLINE))
    {
        int i = 0, j = 0;
        int len = strlen(line);

        // avoid blank lines: it is a line with
        // only one character - <enter>.
        if (len == 1)
        {
            continue;
        }

        // run across the line
        while (i < len)
        {
            // blank
            if (line[i] == ' ' || line[i] == '\t')
            {
                // trailing blank
                if (blanks)
                {
                    i++;
                    continue;
                } else
                // first blank after word
                {
                    blanks = true;
                }
            // no-blank
            } else
            {
                blanks = false;
            }

            // no-blanks and first blank after word
            trailed[j++] = line[i++];
        }

        // output of each transformed line
        trailed[j] = '\0';
        printf("%s", trailed);
    }
    printf("\n");

    return EXIT_SUCCESS;
}
