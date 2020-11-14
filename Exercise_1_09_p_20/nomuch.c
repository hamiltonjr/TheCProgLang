#include <stdio.h>

/*
 * Exclude excedent blanks in input.
 * For testing, type     ./nomuch < blake.txt.
 * This is a modified test file (with exceeded
 * blanks).
 */

int main()
{

    unsigned nb;
    int c;

    nb = 0;
    while ((c = getchar()) != EOF)
    {
        if (c == ' ' && nb == 0)
        {
            // first blank accepted
            nb = 1;
        } else if (c == ' ' && nb > 0)
        {
            // skip exceeded blanks
            continue;
        } else
        {
            nb = 0;
        }

        putchar(c);
    }

    return 0;

}

