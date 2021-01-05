#include "strutil.h"

/*
 * This function concatenate the string t at the end
 * of the string s.
 */

void strcat(char *s, const char *t)
{
    // go to the end of s
    for ( ; *s; s++);

    // go copying until the end of t
    for ( ; (*s = *t); s++, t++);
}
