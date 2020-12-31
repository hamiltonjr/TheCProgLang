#include "trailing.h"

int main()
{

    char line[MAXLINE];

    // catching lines 
    while (getline(line, MAXLINE))
    {
        printf("%s", line);
    }

    return EXIT_SUCCESS;

}

