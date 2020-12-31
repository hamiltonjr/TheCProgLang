#ifndef UTILS_H
#define UTILS_H
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <unistd.h>
#define ALLOCSIZE 10000
#define MAXLINES   5000
#define MAXLEN     1000
#define BASE         10

// array of pointers
char *lineptr[MAXLINES];

// prototype(s)
void writelines(char**, int);
int numcmp(const char*, const char*);
int compare(const char*, const char*);
char* alloc(int n);
void afree(char *p);
void lower(char*);

#undef readlines
#define readlines my_readlines
int my_readlines(char**, int);

#undef qsort
#define qsort my_qsort
void my_qsort(void**, int, int, int (*comp)(void*, void*));

#undef atof
#define atof my_atof
double my_atof(const char*);

#undef getline
#define getline my_getline
int my_getline(char*, int);

// auxiliart booleans
bool numeric, reversed, folded;

#endif // UTILS_H

