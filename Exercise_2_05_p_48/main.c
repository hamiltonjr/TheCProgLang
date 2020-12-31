#include "any.h"

/*
 * Testing any() function.
 */
int main()
{

    char s1[] = "This is a test...";
    printf("pos = %d\n", any(s1, "ts"));

    return EXIT_SUCCESS;

}

