#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#define MAXLINE 1024

int main(int argc, char **argv)
{
    char line[MAXLINE];
    char larg[256];
    int c;

    // a boolean flag for each option
    bool help = false;
    bool process = false;

    // run along arguments
    while (--argc > 0 && (*++argv)[0] == '-')
    {
        // process long options (--)
        if ((*argv)[1] == '-')
        {
            strcpy(larg, (*argv + 2));
            if (!strcmp(larg, "help") && !help)
            {
                printf("HELP\n");
                help = true;
            } else
            if (!strcmp(larg, "process") && !process)
            {
                printf("PROCESSING...\n");
                process = true;
            } else
            {
                fprintf(stderr, "ERROR: unknown option\n");
                printf("Try -h or --help options to help\n");
                exit(EXIT_FAILURE);
            }
            
            continue;        
        }

        // process short options (-)
        while (c = *++argv[0])
        {
            switch (c)
            {
            case 'h':
                if (!help)
                {
                    printf("HELP\n");
                    help = true;
                }
                break;
            case 'p':
                if (!process)
                {
                    printf("PROCESSING...\n");
                    process = true;
                }
                break;
            default:
                fprintf(stderr, "ERROR: unknown option\n");
                printf("Try -h or --help options to help\n");
                exit(EXIT_FAILURE);
            }
        }
    }

    return EXIT_SUCCESS;
}
