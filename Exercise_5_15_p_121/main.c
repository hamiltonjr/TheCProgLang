#include "utils.h"

/*
 * This is the main function of Sorting Project with command-
 * -line arguments (UNIX style).
 */
// auxiliary booleans

int main(int argc, char **argv)
{

    int nlines, c;
    int arg;

    // initialize booleans 
    numeric = reversed = folded = false;

    // parse arguments -
    arg = argc;
    while (--arg > 0 && (*++argv)[0] == '-')
    {
        while ((c = *++argv[0]))
        {
            if (c == 'n') numeric = true;
            else 
            if (c == 'r') reversed = true;
            else
            if (c == 'f') folded = true;
            else
            {
                fprintf(stderr, "Illegal argument!\n");
                exit(EXIT_FAILURE);
            }
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
                    (int (*)(void*, void*))strcmp_r);
            } else
            {
                qsort((void**)lineptr, 0, nlines - 1, 
                    (int (*)(void*, void*))strcmp);
            }
        }
                
        writelines(lineptr, nlines);
        return EXIT_SUCCESS;
    } else
    {
        fprintf(stderr, "Input too big to sort!\n");
        exit(EXIT_FAILURE);
    }

}

