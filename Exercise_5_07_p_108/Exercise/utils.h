#ifndef UTILS_H
#define UTILS_H
#include <ctype.h>
#include <limits.h>
#include <malloc.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#define ALLOCSIZE 10000
#define MAXLINES   5000
#define MAXLEN     1000

// prototype(s)
void writelines(char lineptr[MAXLINES][MAXLEN], int);
int getline(char*, int);

#undef qsort
#define qsort my_qsort
void my_qsort(char v[MAXLINES][MAXLEN], int, int);

#undef readlines
#define readlines my_readlines
int my_readlines(char lineptr[MAXLINES][MAXLEN], int);


#endif // UTILS_H

