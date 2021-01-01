#include "fold.h"

int main()
{
    char line[MAXLINE];
    int len = 0;

    printf("\n");
    while ((len = getline(line, MAXLINE)) > 0)
    {
        printf("Before...\n");
        printf("%s", line);

        fold(line);
        
        printf("After...\n");
        printf("%s\n", line);
    }
    printf("\n");

    return EXIT_SUCCESS;
}
