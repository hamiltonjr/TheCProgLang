#include <stdio.h>

/*
 * Count blanks, tabs and newlines in input.
 * For testing, type ./counter < blake.txt.
 */

int main()
{

    int c, nb, nt, nl;

    nb = nt = nl = 0;
    while ((c = getchar()) != EOF)
    {
        if (c == ' ')  nb++;
        if (c == '\t') nt++;
        if (c == '\n') nl++;
    }

    printf("\n\tblanks = %d | tabs = %d | newlines = %d\n\n",
            nb, nt, nl);

    return 0;

}

