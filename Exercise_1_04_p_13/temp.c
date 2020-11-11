#include <stdio.h>

/*
 * Print Celsius-Fahrenheit table
 * for celsius = 0, 10, ..., 150
 */

int main()
{

    double fahr, celsius;
    double lower, upper, step;

    // header
    printf("------------------------------\n");
    printf("    TEMPERATURE CONVERSION    \n");
    printf("  FROM CELSIUS TO FAHRENHEIT  \n");
    printf("         ºC        ºF         \n");
    printf("------------------------------\n");
    lower = 0.0;
    upper = 150.0;
    step = 10.0;

    celsius = lower;
    while (celsius <= upper)
    {
        fahr = (9.0/5.0)*celsius + 32.0;;
        printf("%12.2lf\t%6.2lf\n", celsius, fahr);
        celsius = celsius + step;
    }

    // footer
    printf("------------------------------\n");

    return (0);

}

