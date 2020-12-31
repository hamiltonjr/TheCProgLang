#include <stdio.h>
#include <stdlib.h>
#define IN     1
#define OUT    0

/*
 * This code is a word counter. It counts also
 * characters and lines (is a bare wc).
 * For testing:             ./words < test.txt.
 * The test file reflects my opinion of how I'd
 * test this program.  The  values obtained are
 * syncornized with wc UNIX app.
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
