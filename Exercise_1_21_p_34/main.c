#include "entab.h"

int main()
{

    char line[MAXLINE];
    char vline[MAXLINE];
    int len = 0;

    printf("\n");
    while ((len = getline(line, MAXLINE)) > 0)
    {
        printf("Before...\n");
        strcpy(vline, line);
        visible(vline);
        printf("%s", vline);
        
        printf("After...\n");
        entab(line);
        visible(line);
        printf("%s\n", line);
    }
    printf("\n");

    return EXIT_SUCCESS;

}

