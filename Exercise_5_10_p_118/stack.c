#include "utils.h" 
#define MAXVAL 100

double val[MAXVAL];
int sp = 0;


void push(double f)
{

    if (sp < MAXVAL)
    {
        val[sp++] = f;
    } else
    {
        fprintf(stderr, "ERROR: stack full!\n");
        exit(EXIT_FAILURE);
    }

}


double pop(void)
{

    if (sp > 0)
    {
        return val[--sp];
    } else
    {
        fprintf(stderr, "ERROR: stack empty!\n");
        exit(EXIT_FAILURE);
    }

}


void clear(void)
{

    if (!empty())
    {
        sp = 0;
    } else
    {
        fprintf(stderr, "ERROR: stack empty!\n");
        exit(EXIT_FAILURE);
    }

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

    if (!empty())
    {
        return val[sp - 1];
    } else
    {
        fprintf(stderr, "ERROR: stack empty!\n");
        exit(EXIT_FAILURE);
    }

}


void show_top(void)
{

    if (!empty())
    {
        printf("%lf", top());
    } else 
    {
        fprintf(stderr, "ERROR: stack empty!\n");
        exit(EXIT_FAILURE);
    }

}


void show_stack(void)
{

    if (!empty())
    {
        for (register size_t i = 0; i < sp; ++i)
        {
            printf("%lf %c ", val[i], (i < sp - 1) ? '|' : ' '); 
        }
    } else
    {
        fprintf(stderr, "ERROR: stack empty!\n");
        exit(EXIT_FAILURE);
    }

}


void duplicate(void)
{

    if (full())
    {
        fprintf(stderr, "ERROR: stack full!\n");
        exit(EXIT_FAILURE);
    } else
    if (empty())
    {
        fprintf(stderr, "ERROR: stack empty!\n");
        exit(EXIT_FAILURE);
    } else
    {
        push(top());
    }

}


void swap()
{

    if (!empty())
    {
        double first = pop();
        double second = pop();
        push(first);
        push(second);
    } else
    {
        fprintf(stderr, "ERROR: stack empty!\n");
        exit(EXIT_FAILURE);
    }

}

