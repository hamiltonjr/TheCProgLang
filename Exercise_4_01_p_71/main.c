#include <stdio.h>
#include <stdlib.h>
#include "../lib/utils.h"
#define MAXLINE 1024

/*
 * Testing strindex() and strrindex() function.
 * It is 2 whiles: it needed to comment one and 
 * uncomment other and compile to see effects.
 */
int main()
{
    char line[MAXLINE];
    char pattern[10] = "re";
    int found = 0;
    int pos = 0;

    /* leftmost */
    while (getline(line, MAXLINE) > 0)
    {
        if ((pos = strindex(line, pattern)) >= 0)
        {
            printf("%d: %s", pos, line);
            found++;
        }
    }

    /* rightmost
    while (getline(line, MAXLINE) > 0)
    {
        if ((pos = strrindex(line, pattern)) >= 0)
        {
            printf("%d: %s", pos, line);
            found++;
        }
    }*/

    return found;
}
