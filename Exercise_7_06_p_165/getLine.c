#include <stdio.h>
#include <string.h>

/**
 * This function uses fGetS() to get a line in stdin.
 */
// prototype
char *fGetS(char*, int, FILE*);

int getLine(char *line, int max)
{
    if (fGetS(line, max, stdin) == NULL)
        return 0;
    return strlen(line);
}
