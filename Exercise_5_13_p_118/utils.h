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
char* alloc(int);
int getLine(char*, int);
int readLines(char**, int);
void writeLines(char**, int);
int a2i(char*);

#endif // UTILS_H
