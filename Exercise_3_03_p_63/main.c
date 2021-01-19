#include <stdio.h>
#include <stdlib.h>
#define MAXLEN 1000

// prototype
void expand(char*, char*);

/*
 * Testing expand() function.
 */
int main()
{
    char s1[MAXLEN]; 
    char s2[MAXLEN];

    // input
    scanf("%s", s2);

    // output
    printf("\n\tSequence %s expanded becomes: ", s2);
    expand(s1, s2);
    printf("%s\n\n", s1);

    return EXIT_SUCCESS;
}
