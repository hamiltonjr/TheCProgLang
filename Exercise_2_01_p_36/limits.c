#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main()
{
    printf("\n\tMinimum and maximum values a `signed char' can hold.\n");
    printf("\tSCHAR_MIN = %d\n", SCHAR_MIN);
    printf("\tSCHAR_MAX = %d\n", SCHAR_MAX);

    printf("\tMaximum value an `unsigned char' can hold.\n");
    printf("\tUCHAR_MAX = %d\n", UCHAR_MAX);

    printf("\tMinimum and maximum values a `char' can hold.\n");
    printf("\tIn this architeture the char unsigned is definde.\n");
    printf("\tCHAR_MIN = %d\n", CHAR_MIN);
    printf("\tCHAR_MAX = UCHAR_MAX = %d\n",  UCHAR_MAX);
    printf("\tCHAR_MIN = SCHAR_MIN = %d\n", SCHAR_MIN);
    printf("\tCHAR_MAX = SCGAR_MAX = %d\n", SCHAR_MAX);

    printf("\tMinimum and maximum values a `signed short int' can hold.\n");
    printf("\tSHRT_MIN = %d\n", SHRT_MIN);
    printf("\tSHRT_MAX = %d\n\n", SHRT_MAX);

    return EXIT_SUCCESS;
}
