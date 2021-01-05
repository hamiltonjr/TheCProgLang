#include "visible.h"

/*
 * This function converts escape sequences to visible
 * representatiohns of it.
 *
 * input..: a string t with text to be converted.
 * output.: a string with text converted.
 */

void escape(char *s, char *t)
{
    for ( ; *t != '\0'; t++)
    {
        switch(*t)
        {
            case '\t':
                *s = '\\'; s++;
                *s = 't'; s++;
                break;
            case '\b':
                *s = '\\'; s++;
                *s = 'b'; s++;
                break;
            case '\n':
                *s = '\\'; s++;
                *s = 'n'; s++;
                break;
            default:
                *s = *t; s++;
                break;
        }
    }

    *s = '\0';
}
