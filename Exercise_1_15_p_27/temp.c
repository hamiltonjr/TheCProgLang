#include <stdio.h>
#include <stdlib.h>
#define LOWER   0.0
#define UPPER 300.0
#define STEP   20.0

/*
 * Print Fahrenheit-Celsius table
 * for fahr = 0, 20, ..., 300.
 * But now using functions.
 */

// prototpye
double ftoc(double fahr);

int main()
{
    double fahr, celsius;
    double lower, upper, step;

    // header
    printf("\t--------------\n");
    printf("\tTEMP CONVERTER\n");
    printf("\t   ºF     ºC  \n");
    printf("\t--------------\n");

    // program loop
    for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
    {
        printf("\t%6.2lf\t%6.2lf\n", fahr, ftoc(fahr));
    }
    printf("\t--------------\n");

    return EXIT_SUCCESS;
}
 
// This function converts temperatues from fahrenheit degrees 
// to celsius degrees.
double ftoc(double fahr)
{
    return (5.0/9.0)*(fahr - 32.0);
}
