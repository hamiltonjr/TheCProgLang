#include <stdio.h>
#include <stdarg.h>

/**
 * This function implements a bare printf(). The intention is show
 * how variable parameters in functions works.
 */
void minprintf(char *fnt, ...)
{
    va_list ap;
    char *p, *sval, cval;
    int ival;
    double dval;

    va_start(ap, fnt);
    for (p = fnt; *p; p++)
    {
        // strings are special case
        if (*p != '%')
        {
            putchar(*p);
            continue;
        }

        switch(*++p)
        {
        /**
         * integer numbers
         */
        case 'c':
            cval = va_arg(ap, int);
            printf("%c", cval);
            break;

        case 'd':
        case 'i':
            ival = va_arg(ap, int);
            printf("%d", ival);
            break;

        case 'o':
            ival = va_arg(ap, int);
            printf("%o", ival);
            break;

        case 'x':
            ival = va_arg(ap, int);
            printf("%x", ival);
            break;

        case 'X':
            ival = va_arg(ap, int);
            printf("%X", ival);
            break;

        case 'u':
            ival = va_arg(ap, unsigned);
            printf("%u", ival);
            break;

        /**
         * Floatting-point numbers
         */
        case 'f':
            dval = va_arg(ap, double);
            printf("%f", dval);
            break;

        // strings are special case
        case 's':
            for (sval = va_arg(ap, char *); *sval; sval++)
            {
                putchar(*sval);
            }                
            break;

        default:
            putchar( *p) ;
            break;
        }
    }

    va_end(ap);
}
