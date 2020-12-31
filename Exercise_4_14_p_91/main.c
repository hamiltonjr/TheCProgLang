#include <stdio.h>
#include <stdlib.h>

/*
 * This program shows how macros can be used.
 * It is small to write a makefile: for compiling
 * it, it is just to take:
 *    gcc -o test main.c && ./test
 */
// macro
#define SWAP(t, x, y) {  t aux = x; x = y; y = aux; }

int main()
{

    double m = 3.14, n = 1.41;
    int a = 3, b = 4;

    printf("\n\tType: double\n");
    printf("\tm = %lf n = %lf\n", m, n);
    SWAP(double, m, n);
    printf("\tm = %lf n = %lf\n", m, n);

    printf("\n\tType: int\n");
    printf("\ta = %d b = %d\n", a, b);
    SWAP(int, a, b);
    printf("\ta = %d b = %d\n\n", a, b);

    return EXIT_SUCCESS;

}

