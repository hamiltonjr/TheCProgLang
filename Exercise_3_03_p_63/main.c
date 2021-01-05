#include "expand.h"

/*
 * Testing expand() function.
 */

int main()
{
    char s1[MAXLEN]; 
    char s2[MAXLEN] = "a-b-c";

    printf("\n\tSequence %s expanded becomes: ", s2);
    expand(s1, s2);
    printf("%s\n\n", s1);

    return EXIT_SUCCESS;
}
