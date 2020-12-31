#include "squeeze.h"

/*
 * This function cut a character c of string s.
 *
 * input..: the string s and character c.
 * output.: the string s without character c.
 */
void squeeze(char *s, int c)
{

    register size_t i, j;

    for (i = j = 0; *(s + i); ++i)
    {
       if (*(s + i) != c)
       {
          *(s + j++) = *(s + i);
       }
    }
    *(s + j) = '\0';

}

