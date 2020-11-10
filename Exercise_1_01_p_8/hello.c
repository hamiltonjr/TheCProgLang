#include <stdio.h>

/*
 * If stdio.h is not included, it is trigged a warning of 
 * implicit declaration of printf().
 * If the name of function main is changed, the compiler
 * says that is no main function.
 */

int main()
{

    printf("Hello world!\n");

}

