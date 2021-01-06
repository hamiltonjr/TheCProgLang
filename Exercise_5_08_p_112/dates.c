#include "utils.h"

static char daytab[2][13] = {
    {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
    {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
};

// set day of year from month and day
int day_of_year(int year, int month, int day)
{
    // leap year = 1 non-leap year = 0
    int leap = (year%4 == 0) && ((year%100 != 0) || (year%400 == 0));
    
    // verify month range
    if (month < 1 || month > 12)
    {
        printf("\n\tERROR: month out of range!\n\n");
        exit(EXIT_FAILURE);
    }

    // verify day range
    if (day < 1 || day > daytab[leap][month])
    {
        printf("\n\tERROR: day out of range!\n");
        exit(EXIT_FAILURE);
    }

    // calculate day of year
    for (register size_t i = 1; i < month; ++i)
    {
        day += daytab[leap][i];
    }

    return day;
}

// set month and day from day of year
void month_day(int year, int yearday, int *month, int *day)
{
    // leap year = 1 non-leap year = 0
    int leap = (year%4 == 0) && ((year%100 != 0) || (year%400 == 0));
    
    // index
    register size_t i;
    
    // verify day range
    if (yearday < 1 || yearday > 365 + leap)
    {
        printf("\n\tERROR: year day out of range!\n\n");
        exit(EXIT_FAILURE);
    }

    // calculate yearday
    for (i = 1; yearday > daytab[leap][i]; ++i)
    {
        yearday -= daytab[leap][i];
    }

    // set month and day
    *month = i;
    *day = yearday;
}
