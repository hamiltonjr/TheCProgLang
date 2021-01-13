#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/**
 * This program cuts trailing blanks in the input text.
 */
int main()
{
    bool in_spaces = false;
    int c;

    while ((c = getchar()) != EOF)
    {   
        if (c == ' ')
        {
            if (in_spaces)
            {
                continue;
            } else
            {
                in_spaces = true;
            }
        } else
        {
            in_spaces = false;
        }
    
        putchar(c);
    }
    
    return EXIT_SUCCESS;
}
