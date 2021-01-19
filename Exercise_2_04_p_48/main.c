#include <stdio.h>
#include <stdlib.h>
#include "../lib/utils.h"

/*
 * testing strsqz() function.
 */
int main()
{
    char s[] = "abracadabra";
 
    printf("\n\tThe word %s without the letters 'a' and 'r' are ", s);
    strSqz(s, "ar");
    printf("%s\n\n", s);

    return EXIT_SUCCESS;
}
