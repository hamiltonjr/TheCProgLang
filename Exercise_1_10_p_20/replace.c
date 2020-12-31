#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c;

    // program loop
    while ((c = getchar()) != EOF)
    {
        if (c == '\t')
        {
            putchar('\\');
            putchar('t');
        } else if (c == ' ')
        {
            putchar('\\');
            putchar('b');
        } else if (c == '\\')
        {
            putchar('\\');
            putchar('\\');
        } else
        {
            putchar(c);
        }
    }
    
    return EXIT_SUCCESS;
}
