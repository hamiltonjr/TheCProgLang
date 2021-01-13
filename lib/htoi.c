#include "../lib/utils.h"

/*
 * This function converts a string of hexadecimal digits 
 * (including an optional 0x or 0X) into its equivalent 
 * integer value.
 *
 * input..: string of hexadecimal digits.
 * output.: decimal integer value.
 */
int htoi(char *s)
{
    register size_t i = 0;
    int n = 0, value = 0;
    bool in_range = true;
    int c;

    // \0 must be tested here
    while (in_range && *(s + i)) 
    {

        // *(s + i) is repeated a lot
        c = *(s + i);
        
        if (c >= '0' && c <= '9')
        {
            value = c - '0';
        } 
        else 
        if (c >= 'a' && c <= 'f')
        {
            value = c - 'a' + OBASE;
        } 
        else 
        if (c >= 'A' && c <= 'F')
        {
            value = c - 'A' + OBASE;
        } 
        else
        // ignore 0x and 0X in the string beginning 
        if (*s == '0' && (*(s + 1) == 'x' || *(s + 1) == 'X'))
        {
            i++;
            continue;
        }
        else
        {
            in_range = false;
        }

        n = IBASE * n + value;
        i++;

    }

    return n;
}
