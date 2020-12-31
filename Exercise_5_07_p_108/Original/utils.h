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

// line buffer
char *lineptr[MAXLINES];

// prototype(s)
void writelines(char**, int);
int getline(char*, int);
char* alloc(int);

#undef qsort
#define qsort my_qsort
void my_qsort(char**, int, int);

#undef readlines
#define readlines my_readlines
int my_readlines(char**, int);


#endif // UTILS_H

