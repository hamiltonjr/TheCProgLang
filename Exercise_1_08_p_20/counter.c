#include <stdio.h>
#include <stdlib.h>

/**
 * This program is a bare version of UNIX wc.
 */
int main()
{
    int nl = 0; // <enter> are counted
    int nw = 1; // between n words has n-1 spaces
    int nc = 1; // last <enter> is counted
    int c;      // getchar() preference: int

    // program loop
    while ((c = getchar()) != EOF)
    {
        if (c == ' ') { nc++; nw++; }
        else if (c == '\n') nl++;
        else nc++;
    }

    // output
    printf("%d %d %d\n", nl, nw, nc);
    return EXIT_SUCCESS;
}
