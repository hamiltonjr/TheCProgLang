#include "squeeze.h"

/*
 * testing strsqz() function.
 */
int main()
{

    char s[] = "abracadabra";
 
    printf("\n\tThe word %s without the letters 'a' and 'r' are ", s);
    strsqz(s, "ar");
    printf("%s\n\n", s);

    return EXIT_SUCCESS;

}

