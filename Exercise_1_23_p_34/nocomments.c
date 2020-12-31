#include "nocomments.h"

/*
 * This code eliminates comments.
 */

int main()
{

    /* variables */
    bool in_quotes = false;
    bool in_comment = false;
    int c, prev;

    /* main loop */
    while ((c = getchar()) != EOF)
    {
        if (c == '"' && prev != '\'')
        {
            in_quotes = !in_quotes;
        }

        if (prev == '/' && c == '*' && !in_quotes)
        {
            in_comment = true;
        }

        if (prev == '*' && c == '/' && !in_quotes)
        {
            in_comment = false;
        }

        prev = c;

        if (in_comment)
        {
            continue;
        } else
        {
            putchar(c);
        }
    }

    /* the end */
    return 0;

}

