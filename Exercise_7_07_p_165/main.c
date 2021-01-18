#include "../lib/utils.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXLINE 1024

// prototype
char* fGetS(char*, int, FILE*);

/**
 *  find: print lines that match pattern from 1st arg. The program
 *  accepts redirect and command-line arguments.
 */
int main(int argc, char **argv)
{
    int found = 0, counter = 0;
    char line[MAXLINE];
    FILE *fpin;

    // skip bad args
    if (argc == 2)
    {
        // accepts redirect
        fpin = stdin;
    } else 
    // accepts command-line argument
    if (argc == 3)
    {
        // skip bad file pointer
        if ((fpin = fopen(argv[2], "r")) == NULL)
        {
            fprintf(stderr, "ERROR in program %s: Unable to open %s\n", 
                argv[0], argv[2]);
            exit(EXIT_FAILURE);
        }
    } else
    {
        // bad arguments
        fprintf(stderr, "Usage: find pattern\n");
        exit(EXIT_FAILURE);
    }

    // find in lines
    while (fGetS(line, MAXLINE, fpin) != NULL)
    {
        if (strstr(line, argv[1]) != NULL)
        {
            printf("\n%d -> %s", ++counter, line);
            found++;
        }
    }
    printf("\n");

    // the end
    fclose(fpin);
    return EXIT_SUCCESS;
}
