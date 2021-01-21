#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char **argv)
{
    int (*convert[2])(int) = {toupper, tolower};
    int function, c;

    if (argc >= 1)
    {
        if (!strcmp(argv[0], "./upper"))
        {
            function = 0;
        } else if (!strcmp(argv[0], "./lower"))
        {
            function = 1;
        } else
        {
            fprintf(stderr, "Usage: [./upper][./lower] < file\n");
            return EXIT_FAILURE;
        }
    } else
    {
        return EXIT_FAILURE;
    }

    while ((c = getchar()) != EOF)
    {
        putchar(convert[function](c));
    }

    return EXIT_SUCCESS;
}
