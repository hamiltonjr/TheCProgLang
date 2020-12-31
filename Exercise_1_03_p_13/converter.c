#include <stdio.h>
#include <stdlib.h>

int main()
{

    const double lower = 0.0;
    const double upper = 300.0;
    const double step = 20.0;
    double fahr, celsius;

    fahr = lower;
    printf("\n\tFAHR CELSIUS\n");
    printf("\t------------\n");
    while (fahr <= upper)
    {
        celsius = (5.0/9.0) * (fahr - 32.0);
        printf("\t%4.0lf %6.1lf\n", fahr, celsius);
        fahr += step;
    }
    printf("\t------------\n\n");

    return EXIT_SUCCESS;

}

