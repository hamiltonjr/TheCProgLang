#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#define QUOTE 34

int getword(char *word, int lim)
{
    int c, getch(void);
    void ungetch(int);
    char *w = word;
    static bool in_quotes = false;

    // skip spaces
    while (isspace(c = getch()));

    // send EOF or continue
    if (c != EOF)
    {
        *w++ = c;
    }

    // finish if is not a letter or # or _
    if (!isalpha(c) && c != '_' && c != '#' && c != QUOTE)
    {
        *w = '\0';
        return c;
    }

    // get remainder characters
    for ( ; --lim > 0; w++)
    {
        *w = getch();

        if (*w == QUOTE)
        {
            in_quotes = !in_quotes;
            printf("in_quotes = %s\n", in_quotes ? "true" : "false");
        }

        if (in_quotes)
            continue;

        if (!isalnum(*w) && *w != '_' && *w != '#')
        {
            ungetch(*w);
            break;
        }
    }

    *w = '\0';
    return word[0];
}
