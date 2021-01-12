#include "utils.h"

/*
 * This function write lines stored in a variable-length
 * array (an array of pointers) at stdout.
 */
void writelines(char **lineptr, int nlines)
{
    while (nlines-- > 0)
    {
        printf("%s\n", *lineptr++);
    }
}
