#include <stdio.h>
#include <stdlib.h>
#include "../lib/utils.h"
#define MAXLINE 1024

/*
 * Testing atof() function as implementation of a 
 * rudimentary calculator.
 */

int main()
{
    char line[MAXLINE];
    double sum = 0.0;

    // input of string number representation
    printf("\n");
    while (getline(line, MAXLINE) > 0)
    {
        // output floatting-point number summation
        printf("\t%g\n", sum += atofc(line));
    }
    printf("\n");

    return EXIT_SUCCESS;
}
