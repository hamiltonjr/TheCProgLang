#include <ctype.h>

/*
 * This function turm a character to lowercase.
 */
void lower(char *s)
{
    for (register unsigned i = 0; *(s + i); i++)
    {
        *(s + i) = tolower(*(s + i));
    }
}
