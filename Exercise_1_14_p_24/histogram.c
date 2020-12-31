#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define IN        1
#define OUT       0
#define ALPHA    26
#define MAXSIZE  60

/*
 * This code implements drawing a histogram fo frequencies
 * of words in a text.
 * For testing use:   ./histogram text.txt.
 */

// alphabetic characters counters
int counter[2*ALPHA];
size_t chars;

// prototype
void hist(int);

int main()
{
    int c;

    // program loop
    while ((c = getchar()) != EOF)
    {
        // count each letter
        if (c >= 'A' && c <= 'Z')
        {
            counter[c - 'A']++;
        } else if (c >= 'a' && c <= 'z')
        {
            counter[c - 'a' + ALPHA]++;
        }

        // count all letters
        chars++;
    }

    // draws histogram for uppercase letters
    printf("\n");
    for (register char i = 'A'; i <= 'Z'; ++i)
    {
        printf("%c: ", i);
        hist(counter[i-'A']);
        printf("\n");
    }
    
    // draws histogram for lowercase letters
    printf("\n");
    for (register char i = 'a'; i <= 'z'; ++i)
    {
        printf("%c: ", i);
        hist(counter[i-'a'+ALPHA]);
        printf("\n");
    }
    printf("\n");
    
    return (EXIT_SUCCESS);
}

// this code draws histogram line using asterisks
void hist(int size)
{
    if (size > MAXSIZE)
    {
        fprintf(stderr, "ERROR: histogram size exceeds max lenght\n");
        exit(EXIT_FAILURE);
    }
    
    printf("[%4.2lf] ", (double)size/chars);
    for (register size_t i = 0; i < size; ++i)
    {
        putchar('*');
    }
}
