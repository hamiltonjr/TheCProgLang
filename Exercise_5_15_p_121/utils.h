#ifndef UTILS_H
#define UTILS_H
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#define ALLOCSIZE 10000
#define MAXLINES   5000
#define MAXLEN     1000
#define BASE         10

// external variable
char *lineptr[MAXLINES];
bool numeric, reversed, folded;

// prototype(s)
void writelines(char**, int);
int numcmp(const char*, const char*);
int strcmp_r(const char*, const char*);
int numcmp_r(const char*, const char*);
char* alloc(int n);
void afree(char *p);
void lower_cpoy(char*, char*);

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

#endif // UTILS_H

