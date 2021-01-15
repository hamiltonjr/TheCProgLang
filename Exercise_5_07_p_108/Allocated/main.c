#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAXLINES 5000

// buffer
char *lineptr[MAXLINES];

// prototypes
void quickSort(char *lineptr[], int, int);
int readLines(char *lineptr[], int);
void writeLines(char *lineptr[], int);

/*
 * This is the main function. It is defined here a buffer p
 * special for this exercise.
 */
int main()
{
    int nlines;

    clock_t b = clock();
    if ((nlines = readLines(lineptr, MAXLINES)) >= 0)
    {
        quickSort(lineptr, 0, nlines - 1);
        writeLines(lineptr, nlines);
    } else
    {
        printf("ERROR: input too big to sort!\n");
        return EXIT_FAILURE;
    }
    clock_t e = clock();
    double time_spent = (double)(e - b) * 1000.0 / CLOCKS_PER_SEC;
    printf("time = %lf milisseconds\n\n", time_spent);

    return EXIT_SUCCESS;
}
