#ifndef UTILS_H
#define UTILS_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXLINES 4086
#define MAXLEN    256

// prototypes
void quickSort(char lineptr[][MAXLEN], int, int);
int readLines(char lineptr[][MAXLEN], int);
void writeLines(char lineptr[][MAXLEN], int);
int getLine(char*, int);

#endif // UTILS_H
