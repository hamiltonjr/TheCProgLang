#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main()
{

    printf("Minimum and maximum values a `signed char' can hold.\n");
    printf("SCHAR_MIN = %d\n", SCHAR_MIN);
    printf("SCHAR_MAX = %d\n", SCHAR_MAX);

    printf("Maximum value an `unsigned char' can hold.\n");
    printf("UCHAR_MAX = %d\n", UCHAR_MAX);

    printf("Minimum and maximum values a `char' can hold.\n");
    printf("In this architeture the char unsigned is definde.\n");
    printf("CHAR_MIN = %d\n", CHAR_MIN);
    printf("CHAR_MAX = UCHAR_MAX = %d\n",  UCHAR_MAX);
    printf("CHAR_MIN = SCHAR_MIN = %d\n", SCHAR_MIN);
    printf("CHAR_MAX = SCGAR_MAX = %d\n", SCHAR_MAX);

    printf("Minimum and maximum values a `signed short int' can hold.\n");    printf("SHRT_MIN = %d\n", SHRT_MIN);
    printf("SHRT_MAX = %d\n", SHRT_MAX);









    

    return EXIT_SUCCESS;

}

