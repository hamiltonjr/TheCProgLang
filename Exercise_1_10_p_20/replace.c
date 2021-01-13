#include <stdio.h>
#include <stdlib.h>

/**
 * This program replaces spaces for  \b, tabs for  \t
 * and \ for \\. It's a trick to turn spaces visible.
 */
int main()
{
    int c;

    // program loop
    while ((c = getchar()) != EOF)
    {
        if (c == '\t')
        {
            putchar('\\');
            putchar('t');
        } else if (c == ' ')
        {
            putchar('\\');
            putchar('b');
        } else if (c == '\\')
        {
            putchar('\\');
            putchar('\\');
        } else
        {
            putchar(c);
        }
    }
    
    return EXIT_SUCCESS;
}
