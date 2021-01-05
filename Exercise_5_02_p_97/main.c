#include "gets.h"

int main()
{
    double d;

    printf("\n");
    while (getfloat(&d) != EOF)
    {
        printf("\t%lf\n", d);
    }
    printf("\n");

    return EXIT_SUCCESS;
}
