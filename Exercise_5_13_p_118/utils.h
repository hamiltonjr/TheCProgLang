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
char* alloc(int);

#undef getline
#define getline my_getline
int getline(char*, int);

#undef readlines
#define readlines my_readlines
int my_readlines(char**, int);

#undef atoi
#define atoi my_atoi
int my_atoi(char*);

#endif // UTILS_H

