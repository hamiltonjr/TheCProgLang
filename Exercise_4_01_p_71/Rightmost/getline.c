#include "pattern.h"

/*
 * This function allows input of a text line.
 *
 * input..: a string text line and limit for its length.
 * output.: number of characters (length of line).
 */
int getline(char *line, int lim)
{

    register size_t i;
    int c = 0;

    // loop for input
    for (i = 0; i < lim-1 && (c=getchar()) != EOF && c != '\n';++i)
    {
        *(line + i) = c;
    }

    // include \n in line
    if (c == '\n')
    {
        *(line + i) = c;
        ++i;
    }
    *(line + i) = '\0';

    return i;

}

