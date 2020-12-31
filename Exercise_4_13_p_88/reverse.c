#include "reverse.h"

/*
 * This function reverses a string.
 *
 * input..: a string to be reversed.
 * output.: in the same string, the reverse changes 
 * its content.
 * OBS: recursive version.
 */
void reverse(char *s)
{
    
    size_t len = strlen(s);

    if (len < 2) 
        return;
    
    char t = s[len - 1];
    s[len - 1] = '\0';
    
    reverse(s + 1);
    
    s[len - 1] = s[0];
    s[0] = t;

}


