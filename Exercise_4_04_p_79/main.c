#include "calc.h"

int main()
{
    int type;
    double op2;
    char s[MAXOP];

    while ((type = getop(s)) != EOF)
    {
        printf("%d\n", type);
        switch (type)
        {
        case NUMBER:
            push(atoi(s));
            break;
        case '+':
            push(pop() + pop());
            break;
        case '*':
            push(pop() * pop());
            break;
        case '-':
            op2 = pop();
            push(pop() - op2);
            break;
        case '/':
            op2 = pop();
            if (op2 != 0.0)
            {
                push(pop() / op2);
            } else
            {
                printf("ERROR: division by zero!\n");
            }
            break;
        case '%':
            op2 = pop();
            push((int)pop() % (int)op2);
            break;
        case '\n':
            printf("\t%.8g\n", pop());
            break;
        default:
            printf("ERROR: unknown command%s\n", s);
            break;
        }
    }

    return EXIT_SUCCESS;

}

