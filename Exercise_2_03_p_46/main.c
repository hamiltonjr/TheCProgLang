#include <stdio.h>
#include <stdlib.h>
#include "../lib/utils.h"

/*
 * Testing htoi() function
 */
int main()
{
    printf("\n");
    printf("\t%s......: %d\n", "0XA", htoi("0XA"));
    printf("\t%s......: %d\n", "0xf", htoi("0xf"));
    printf("\t%s.....: %d\n", "0x20", htoi("0x20"));
    printf("\t%s.....: %d\n", "0Xff", htoi("0Xff"));
    printf("\t%s.: %d\n", "0x3f4d5c", htoi("0x3f4d5c"));
    printf("\n");

    return EXIT_SUCCESS;
}
