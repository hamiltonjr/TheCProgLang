#include "utils.h"
#define MAXOP 20

/**
 * Here multiplication cannot be * because it is a wild 
 * card character  in  bash and command-line arguments.
 * Then, we use 'x'. 
 */

int main(int argc, char **argv)
{
    char op[MAXOP];
    double op2;

    while (--argc > 0 && strcpy(op, *++argv))
    {
        if (!strcmp(op, "+"))
        {
            push(pop() + pop());
        } else 
        if (!strcmp(op, "-"))
        {
            op2 = pop();
            push(pop() - op2);
        } else 
        if (!strcmp(op, "x"))
        {
            push(pop() * pop());
        } else 
        if (!strcmp(op, "/"))
        {
            op2 = pop();
            push(pop() / op2);
        } else 
        {
            push(atof(op));
        }
    }

    // finished arguments, show stack top
    printf("Result = %.8g\n", pop());
    /*
    if (!empty())
    {
        printf("ERROR: stack not empty at finished operation!\n");
    }
    */

    return EXIT_SUCCESS;
}
