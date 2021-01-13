#include <stdio.h>
#include <stdlib.h>
#include "../lib/utils.h"

int main()
{
    const double lower = 0.0;
    const double upper = 300.0;
    const double step = 20.0;
    double fahr, celsius;

    // header
    fahr = lower;
    printf("\n\tFAHR CELSIUS\n");
    printf("\t------------\n");

    // program loop
    while (fahr <= upper)
    {
        celsius = fahr_to_celsius(fahr);
        printf("\t%4.0lf %6.1lf\n", fahr, celsius);
        fahr += step;
    }

    // footer
    printf("\t------------\n\n");

    return EXIT_SUCCESS;
}
