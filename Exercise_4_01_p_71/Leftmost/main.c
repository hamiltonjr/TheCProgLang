#include "pattern.h"

/*
 * Testing strrindex() function.
 */
int main()
{

    char line[MAXLINE];
    char pattern[10] = "ould";
    int found = 0;
    int pos = 0;

    while (getline(line, MAXLINE) > 0)
    {
        if ((pos = strindex(line, pattern)) >= 0)
        {
            printf("%d: %s", pos, line);
            found++;
        }
    }

    return found;

}

