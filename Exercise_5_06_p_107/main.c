#include "utils.h"
#define MAXLINE 1000

int main()
{
    char longest[MAXLINE];
    char line[MAXLINE];
    int len, max = 0;

    // program loop
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
        printf("\nLongest phrase of text...\n");
        printf("%s\n", longest);
    } 

    char number[10] = "3234";
    int n = atoi(number);
    printf("\tUsing atoi()...\n");
    printf("\tPrinting a number like a string: %s\n", number);
    printf("\tPrinting a number like a number: %d\n", n);
    itoa(n, number);
    printf("\n\tUsing itoa()...\n");
    printf("\tPrinting a number like a number: %d\n", n);
    printf("\tPrinting a number like a string: %s\n", number);

    char name[20] = "Ariadna";
    char word[10] = "dna";
    printf("\n\t%s is in %s in position %d\n\n", 
            word, name, strindex(name, word));

    return EXIT_SUCCESS;
}
