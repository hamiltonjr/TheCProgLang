#include "expand.h"

/*
 * Testing expand() function.
 */
int main()
{

    char s1[MAXLEN]; 
    char s2[MAXLEN] = "z-aZ-A9-0";

    printf("\n\tSequence %s expanded becomes: ", s2);
    expand(s1, s2);
    printf("%s\n\n", s1);

    return EXIT_SUCCESS;

}

