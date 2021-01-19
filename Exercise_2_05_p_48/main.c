#include <stdio.h>
#include <stdlib.h>

// prototype
int any(char*, const char*);

/*
 * Testing any() function.
 */
int main()
{
    char s1[] = "This is a test...";
    char s2[] = "ts";

    printf("\n\tword = %s   characters = %s\n", s1, s2);
    printf("\tpos = %d\n\n", any(s1, s2));

    return EXIT_SUCCESS;
}
