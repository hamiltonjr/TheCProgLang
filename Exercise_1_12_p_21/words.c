#include <stdio.h>
#include <stdlib.h>
#define IN     1
#define OUT    0

/*
 * This program shows one words of text per line.
 */
int main()
{
    unsigned state = OUT; 
    int c;

    while ((c = getchar()) != EOF)
    {
        // detect word
        if (c == ' ' || c == '\n' || c == '\t')
        {
            state = OUT;
        // if c is non-blank and state is OUT 
        // a word are initialized
        } else if (state == OUT)
        {
           state = IN;
           putchar('\n');
        }

        putchar(c);
    }

    return EXIT_SUCCESS;
}
