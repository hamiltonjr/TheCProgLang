#include "utils.h"

/*
 * This is the main function of Sorting Project with command-
 * -line arguments (UNIX style).
 */
// auxiliary booleans
bool numeric, reversed;

int main(int argc, char *const *argv)
{

    int nlines, opt;

    // initialize booleans 
    numeric = reversed = false;

    while ((opt = getopt(argc, argv, ":nr")) != -1)
    {
        switch (opt)
        {
        case 'n':
            numeric = true;
            break;
        case 'r':
            reversed = true;
            break;
        case '?':
            fprintf(stderr, "Illegal argument!\n");
            exit(EXIT_FAILURE);
        }
    }

    // read lines and apply quicksort algorithm using 
    // adequate comparison function.
    if ((nlines = readlines(lineptr, MAXLINES)) >= 0)
    {
        if (numeric)
        {
            if (reversed)
            {
                qsort((void**)lineptr, 0, nlines - 1, 
                    (int (*)(void*, void*))numcmp_r);
            } else
            {
                qsort((void**)lineptr, 0, nlines - 1, 
                    (int (*)(void*, void*))numcmp);
            }
        } else
        {
            if (reversed)
            {
                qsort((void**)lineptr, 0, nlines - 1, 
                    (int (*)(void*, void*))strcmp);
            } else
            {
                qsort((void**)lineptr, 0, nlines - 1, 
                    (int (*)(void*, void*))strcmp);
            }
        }
                
        writelines(lineptr, nlines);
        printf("\n");
        return EXIT_SUCCESS;
    } else
    {
        fprintf(stderr, "Input too big to sort!\n\n");
        exit(EXIT_FAILURE);
    }

}

