#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define IN        1
#define OUT       0
#define MAXLEN   60
#define MAXSIZE 100

// This code implements a histogram of word lengths 
// in input. 

// word buffer
char word[MAXLEN];

// prototype
void hist(int);

int main()
{
    unsigned state = OUT; 
    int counter[MAXLEN] = {0};
    size_t i = 1;
    size_t max = 0;
    int c;

    // program loop
    while ((c = getchar()) != EOF)
    {
        // no points
        if (ispunct(c))
        {
            continue;
        }

        // spaces indicates word beginning
        if (isspace(c))
        {
            word[i] = '\0';
            int len = strlen(word);
            counter[len]++;
            
            if (max < len)
            {
                max = len;
            }
            
            i = 0;
            state = OUT;
        } else 
        {
            word[i++] = c;
            if (state == OUT)
            {
                state = IN;
            } 
        }   
    }

    // draw the histogram
    printf("\n");
    for (i = 1; i <= max; ++i)
    {
        printf("\t%02d: ", i);
        hist(counter[i]);
        printf("\n");
    }
    printf("\n");

    return (EXIT_SUCCESS);
}

// this code draws the histogram using asterisks
void hist(int size)
{
    if (size > MAXSIZE)
    {
        fprintf(stderr, "ERROR: histogram size exceeds max lenght\n");
        exit(EXIT_FAILURE);
    }

    printf("[%02d] ", size);
    for (register size_t i = 0; i < size; ++i)
    {
        putchar('*');
    }
}
