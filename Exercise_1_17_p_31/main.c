#include <stdio.h>
#include <stdlib.h>
#include "../lib/utils.h"
#define MAXLINE 1024
#define MAX 80

int main()
{
    char line[MAXLINE];
    int len = 0;

    // catching lines and searching longest
    printf("\n");
    while ((len = getline(line, MAXLINE)) > 0)
    { 
        if (len > MAX)
        {
            printf("[%03d] %s\n", len, line);
        }
    }

    return EXIT_SUCCESS;
}
