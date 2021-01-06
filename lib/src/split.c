#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#define MAXLINE 1024

bool split(char *s, char *t, char *delimiter)
{
    char left[MAXLINE];
    char * found = strstr(s, delimiter);

    if (found != NULL)
    {
        strcpy(left, s);
        strcpy(t, found + strlen(delimiter));
        *(left + strlen(s) - strlen(t) - strlen(delimiter)) = '\0';
        strcpy(s, left);
        return true;
    }

    return false;
}

/**
 * test
 *
int main()
{
    char s[MAXLINE], t[MAXLINE];
    strcpy(s, "no-comment//comment");
    
    printf("Before...\n");
    printf("s = |%s|\n", s);
    printf("t = |%s|\n", t);

    if (split(s, t, "//"))
    {
        printf("Splitting done successfully!\n");
    } else
    {
        fprintf(stderr, "Splitting failed!\n");
    }

    printf("After...\n");
    printf("s = |%s|\n", s);
    printf("t = |%s|\n", t);

    return EXIT_SUCCESS;
}
*/
