#include "utils.h"

/*
 * Testing any() function.
 */
int main()
{
    char s1[] = "This is a test...";
    printf("\n\tpos = %d\n\n", any(s1, "ts"));

    return EXIT_SUCCESS;
}
