#include <stdio.h>
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

    unsigned nl, nw, nc, state; // counters 
    int c;

    nl = nw = nc = 0; // initializing counters
    state = OUT;      // beginning out of words

    while ((c = getchar()) != EOF)
    {
        // count character
        ++nc;

        // count line
        if (c == '\n')
        {
            ++nl;
        }

        // count word
        if (c == ' ' || c == '\n' || c == '\t')
        {
            state = OUT;
        // if c is non-blank and state is OUT 
        // a word are initialized
        } else if (state == OUT)
        {
           state = IN;
           ++nw;
        }
    }

    // output
    printf("\n\t%6d%8d%10d\n\n", nl, nw, nc);

    return 0;

}

