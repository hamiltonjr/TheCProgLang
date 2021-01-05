#ifndef UTILS_H
#define UTILS_U
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <limits.h>
#include <malloc.h>
#define BASE 10

// prototypes
void copy(char*, const char*);
void reverse(char*);
size_t strindex(char*, char*);

#undef getline
#define getline my_getline
int my_getline(char*, int);

#undef atoi
#define atoi my_atoi
int my_atoi(char*);

#undef itoa
#define itoa my_itoa
void my_itoa(int, char*);

#endif // UTILS_H
