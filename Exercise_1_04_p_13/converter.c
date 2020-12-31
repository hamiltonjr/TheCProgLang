#include <stdio.h>
#include <stdlib.h>

int main()
{
    const double lower = -20.0;
    const double upper = 150.0;
    const double step = 10.0;
    double celsius, fahr;

    // header
    celsius = lower;
    printf("\n\tCELSIUS  FAHR\n");
    printf("\t-------------\n");

    // program loop
    while (celsius <= upper)
    {
        fahr = (9.0/5.0) * celsius + 32.0;
        printf("\t%5.1lf %7.1lf\n", celsius, fahr);
        celsius += step;
    }

    // footer
    printf("\t-------------\n\n");

    return EXIT_SUCCESS;
}
