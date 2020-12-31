#include "atof.h"

/*
 * Testing atof() function as implementation of a 
 * rudimentary calculator.
 */
int main()
{

    char line[MAXLINE];
    double sum = 0.0;

    // input of string number representation
    while (getline(line, MAXLINE) > 0)
    {
        // output floatting-point number summation
        printf("\t%g\n", sum += atof(line));
    }

    return EXIT_SUCCESS;

}

