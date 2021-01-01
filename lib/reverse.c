#include <stdio.h>
#include <string.h>
#define MAXLINE 1024

// this function reverses a string
void reverse(char *s)
{
    size_t len = strlen(s);
    size_t i;
    char r[MAXLINE];

    for (i = 0; i < len; ++i)
    {
        r[i] = s[len-i-1];
    }

    r[i] = '\0';
    strcpy(s, r);
}
