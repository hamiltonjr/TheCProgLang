#include <stdio.h>
#include <stdlib.h>

// library function prototype
double fahr_to_celsius(double);

// conversion table using for and inverted order
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
    for (fahr = upper; fahr >= lower; fahr -= step)
    {
        celsius = (5.0/9.0) * (fahr - 32.0);
        printf("\t%4.0lf %6.1lf\n", fahr, celsius);
    }

    // footer
    printf("\t------------\n\n");

    return EXIT_SUCCESS;
}
