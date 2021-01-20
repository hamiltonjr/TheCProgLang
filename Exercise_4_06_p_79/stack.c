#include "calc.h" 

double val[MAXVAL];
int sp = 0;

void push(double f)
{

    if (sp < MAXVAL)
    {
        val[sp++] = f;
    } else
    {
        printf("ERROR: stack full!\n");
    }

}

double pop(void)
{

    if (sp > 0)
    {
        return val[--sp];
    } else
    {
        printf("ERROR: stack empty\n");
        return 0.0;
    }

}

void clear(void)
{

    sp = 0;

}

bool empty(void)
{

    return (sp == 0);

}

bool full(void)
{

    return (sp == MAXVAL - 1);

}

double top()
{

    return val[sp - 1];

}

void show_top(void)
{

    if (!empty())
    {
        printf("%lf", top());
    } else 
    {
        printf("ERROR: impossible to print - stack empty\n");
    }

}

void show_stack(void)
{

    for (register size_t i = 0; i < sp; ++i)
    {
        printf("%lf %c ", val[i], (i < sp - 1) ? '|' : ' '); 
    }

}

void duplicate(void)
{

    if (!full())
    {
        push(top());
    } else
    {
        printf("ERROR: impossible to duplicate - stack full\n");
    }

}

void swap()
{

    double first = pop();
    double second = pop();
    push(first);
    push(second);

}

/* TEST TEST TEST
int main()
{

    push(3.0);
    push(4.0);

    printf("\n\tShowing all the stack: ");
    show_stack();

    printf("\n\tShowing stack top: ");
    show_top();

    printf("\n\tDuplicating top: ");
    duplicate();
    show_stack();

    printf("\n\tSwapping top values...");
    printf("\n\tNew value: %lf", 7.0);
    push(7.0);
    printf("\n\tBefore: ");
    show_stack();
    swap();
    printf("\n\tAfter: ");
    show_stack();

    printf("\n\n");
    return EXIT_SUCCESS;

}
*/

