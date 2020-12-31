#include "utils.h"
#define DEFAULT 10

/*
 * This function is a very simplified version of tail UNIX
 * app. It has only option -n to print n lines of the end 
 * of file (or default 10 lines case the option is not 
 * used).
 */
int main(int argc, char **argv)
{

    // read entire text file
    int nlines = readlines(lineptr, MAXLINES);

    // no option used
    if (argc == 1)
    {
        int tail = nlines - DEFAULT;
        writelines(lineptr + tail, DEFAULT);
    } else
    // option used
    if (argc == 2)
    {
        // begin with '-'
        if (argv[1][0] == '-')
        {
            int value = (-1) * atoi(argv[1]);
            
            // invalid option format
            if (value == 0)
            {
                fprintf(stderr, "Usage: ./tail [-n] < filename\n");
                exit(EXIT_FAILURE);
            }

            // show lines with option
            int tail = nlines - value;
            writelines(lineptr + tail, value);
        } else
        {
            // error in option used format
            fprintf(stderr, "Usage: ./tail [-n] < filename\n");
            exit(EXIT_FAILURE);
        }
    } else
    {
        // error is option usage
        fprintf(stderr, "Usage: ./tail [-n] < filename\n");
        exit(EXIT_FAILURE);
    }

    return EXIT_SUCCESS;

}

