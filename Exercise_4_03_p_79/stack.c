#include "calc.h"
#include "stack.h"

// 
void push(double f)
{
    if (sp < MAXVAL)
    {
        val[sp++] = f;
    } else
    {
        printf("ERROR: stack full!\n");
        exit(EXIT_FAILURE);
    }
}

// 
double pop(void)
{
    if (sp > 0)
    {
        return val[--sp];
    } else
    {
        printf("ERROR: stack empty!\n");
        exit(EXIT_FAILURE);
    }
}

// 
void clear(void)
{
    if (!empty())
    {
        sp = 0;
    } else
    {
        printf("ERROR: stack empty!\n");
        exit(EXIT_FAILURE);
    }
}

// 
bool empty(void)
{
    return (sp == 0);
}

// 
bool full(void)
{
    return (sp == MAXVAL - 1);
}

// 
double top(void)
{
    if (!empty())
    {
        return val[sp - 1];
    } else
    {
        printf("ERROR: stack empty!\n");
        exit(EXIT_FAILURE);
    }
}

// 
void show_top(void)
{
    if (!empty())
    {
        printf("%lf", top());
    } else 
    {
        printf("ERROR: stack empty!\n");
        exit(EXIT_FAILURE);
    }
}

// 
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
        printf("ERROR: stack empty!\n");
        exit(EXIT_FAILURE);
    }
}

// 
void duplicate(void)
{
    if (full())
    {
        printf("ERROR: stack full!\n");
        exit(EXIT_FAILURE);
    } else
    if (empty())
    {
        printf("ERROR: stack empty!\n");
        exit(EXIT_FAILURE);
    } else
    {
        push(top());
    }
}

// 
void swap(void)
{
    if (!empty())
    {
        double first = pop();
        double second = pop();
        push(first);
        push(second);
    } else
    {
        printf("ERROR: stack empty!\n");
        exit(EXIT_FAILURE);
    }
}
