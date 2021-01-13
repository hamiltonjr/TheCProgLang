#include <stdio.h>
#include <stdlib.h>
#include "../lib/utils.h"

/*
 * Testing lower().
 */
int main()
{
    char s[] = "THIS IS A PHRASE IN LOWERCASE";

    printf("\n\tIt is wrong...\n\t%s\n\n", s);
    lower(s);
    printf("\tIt is right...\n\t%s\n\n", s);

    return EXIT_SUCCESS;
}
