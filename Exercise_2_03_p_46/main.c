#include <stdio.h>
#include <stdlib.h>
#include "../lib/utils.h"

/*
 * Testing htoi() function
 */
int main()
{
    printf("\n");
    printf("\t%s......: %d\n", "0XA", h2i("0XA"));
    printf("\t%s......: %d\n", "0xf", h2i("0xf"));
    printf("\t%s.....: %d\n", "0x20", h2i("0x20"));
    printf("\t%s.....: %d\n", "0Xff", h2i("0Xff"));
    printf("\t%s.: %d\n", "0x3f4d5c", h2i("0x3f4d5c"));
    printf("\n");

    return EXIT_SUCCESS;
}
