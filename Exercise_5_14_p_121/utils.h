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
void writeLines(char**, int);
int numCmp(char*, char*);
int compare(char*, char*);
char* alloc(int n);
void afree(char *p);
void lower(char*);
int readLines(char**, int);
void qSort(void**, int, int, int (*comp)(void*, void*));
double a2f(const char*);
int getLine(char*, int);

// auxiliart booleans
bool numeric, reversed, folded;

#endif // UTILS_H
