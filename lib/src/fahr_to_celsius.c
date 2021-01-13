#include <stdio.h>

/**
 * Temperature conversion: Fahrenheit degree to 
 * Celsius degree.
 */

double fahr_to_celsius(double fahr)
{
    return (5.0/9.0) * (fahr - 32.0);
}
