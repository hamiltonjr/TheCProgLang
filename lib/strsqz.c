#include "../lib/utils.h"

/*
 * This function uses squeeze() function to cut
 * each character in s2 from s1.
 */
void strsqz(char *s1, char *s2)
{
    size_t len = strlen(s2);
    register size_t i;

    // run for all s2 catching it characters and applying 
    // squeeze() in s1.
    for (i = 0; i < len; ++i)
    {
        squeeze(s1, *(s2 + i));
    }   
}
