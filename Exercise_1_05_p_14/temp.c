#include <stdio.h>

/*
 * Print Fahrenheit-Celsius table in reversed order
 * for fahr = 300, ..., 0.
 */

int main()
{

    double fahr, celsius;
    double lower, upper, step;

    // header
    printf("------------------------------\n");
    printf("    TEMPERATURE CONVERSION    \n");
    printf("  FROM FAHRENHEIT TO CELSIUS  \n");
    printf("        ºF       ºC           \n");
    printf("------------------------------\n");
    lower = 300.0;
    upper = 0.0;
    step = -20.0;

    fahr = lower;
    while (fahr >= upper)
    {
        celsius = (5.0/9.0)*(fahr - 32.0);
        printf("%12.2lf%8.2lf\n", fahr, celsius);
        fahr = fahr + step;
    }

    // footer
    printf("------------------------------\n");

    return (0);

}

