#include "utils.h"

int main()
{
    int d, m, yd;

    // using legal parameters.
    printf("\n\tUsing legal parameters...\n");
    month_day(2021, 256, &m, &d); 
    printf("\n\tThe 256th day of year is: %d/%d.\n", d, m);

    yd = day_of_year(2021, 10, 9);
    printf("\tMy birthday is the %dth day of year.\n", yd);

    // using illegal parameters, the execution crashes.
    // There are 3 illegal parameters: fixing one, the
    // next crashes until all is fixed.
    printf("\n\tUsing illegal parameters...\n");
    
    month_day(2021, 456, &m, &d); 
    printf("\n\tThe 456th day of year is: %d/%d.\n", d, m);

    yd = day_of_year(2021, 13, 32);
    printf("\tA birthday is the %dth day of year.\n", yd);

    // the end
    printf("\n");
    return EXIT_SUCCESS;
}
