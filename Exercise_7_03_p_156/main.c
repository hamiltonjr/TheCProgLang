#include <stdio.h>
#include <stdlib.h>

/**
 * This is a test for minprintf() function.
 */

// prototype
void minprintf(char *fmt, ...);

int main()
{
    minprintf("\n\t%s\n", "This is a test for minprintf() function...");
    minprintf("\t%s%d\n", "This is an integer number: ", 23);
    minprintf("\t%s%x\n", "This is an hexa integer number: ", 31);
    minprintf("\t%s%f\n\n", "This is an floatting-point number: ", 3.14);

    return EXIT_SUCCESS;
}
