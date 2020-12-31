#include "reverse.h"

int main()
{

    char line[MAXLINE];

    // catching lines 
    while (getline(line, MAXLINE))
    {
        reverse(line);
        printf("\t%s", line);
    }
    printf("\n\n");

    return EXIT_SUCCESS;

}
