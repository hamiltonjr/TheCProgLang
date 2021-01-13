#include <stdio.h>
#include <stdlib.h>
#include "../lib/utils.h"
#define LOWER   0.0
#define UPPER 300.0
#define STEP   20.0

/*
 * Print Fahrenheit-Celsius table for fahr = 0, 20, ..., 300.
 * But now using functions.
 * OBS: fahr_to_celsius() is in utils.a library.
 */
int main()
{
    double fahr;

    // header
    printf("\t--------------\n");
    printf("\tTEMP CONVERTER\n");
    printf("\t   ºF     ºC  \n");
    printf("\t--------------\n");

    // program loop
    for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
    {
        printf("\t%6.2lf\t%6.2lf\n", fahr, 
            fahr_to_celsius(fahr));
    }
    printf("\t--------------\n");

    return EXIT_SUCCESS;
}
