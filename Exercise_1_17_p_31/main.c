#include "gt80.h"
#define MAX 80

int main()
{

    char line[MAXLINE];
    int len = 0;

    // catching lines and searching longest
    while ((len = getline(line, MAXLINE)) > 0)
    { 
        if (len > MAX)
        {
            printf("[%03d] %s\n", len, line);
        }

    }

    return EXIT_SUCCESS;

}

