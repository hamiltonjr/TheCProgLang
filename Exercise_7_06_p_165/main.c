#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXLINE 1024

/**
 * This program searches differences in files.
 */

// prototype
char* fGetS(char*, int, FILE*);

int main(int argc, char **argv)
{
    char *prog = argv[0], line1[MAXLINE], line2[MAXLINE]; 
    FILE *fp1, *fp2;
    int diff;

    // skip no args
    if (argc < 3)
    {
        fprintf(stderr, "Usage: fcmp file1 file2\n");
        exit(EXIT_FAILURE);
    }

    // skip file 1 not opened
    if ((fp1 = fopen(argv[1], "r")) == NULL)
    {
        fprintf(stderr, "%s: can't open %s\n", prog, argv[1]);
        exit(EXIT_FAILURE);
    }

    // skip file 2 not opened
    if ((fp2 = fopen(argv[2], "r")) == NULL)
    {
        fprintf(stderr, "%s: can't open %s\n", prog, argv[2]);
        exit(EXIT_FAILURE);
    }

    // search differences
    if (fGetS(line1, MAXLINE-1, fp1) != NULL &&
        fGetS(line2, MAXLINE-1, fp2) != NULL)
    {
        diff = strcmp(line1, line2);
    }

    while (diff == 0 && fGetS(line1, MAXLINE-1, fp1) != NULL &&
        fGetS(line2, MAXLINE-1, fp2) != NULL) 
    {
        diff = strcmp(line1, line2);
    }

    // show result
    if (!diff)
    {
        printf("The files has not difference\n\n");
    } else
    {
        printf("%s: %s", argv[1], line1);
        printf("%s: %s\n", argv[2], line2);
    }

    // the end
    fclose(fp1);
    fclose(fp2);
    return EXIT_SUCCESS;
}
