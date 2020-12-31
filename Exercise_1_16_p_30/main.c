#include "longest.h"

int main()
{

    char line[MAXLINE];
    char longest[MAXLINE];
    int len = 0, max = 0;

    // catching lines and searching longest
    while ((len = getline(line, MAXLINE)) > 0)
    {
        if (len > max)
        {
            max = len;
            copy(longest, line);
        }
    }

    // output
    if (max > 0)
    {
        printf("[%d] %s", max, longest);
    }

    return EXIT_SUCCESS;

}

