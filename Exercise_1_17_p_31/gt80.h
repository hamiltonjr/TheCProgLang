#ifndef GT80_H
#define GT80_H

#include <stdio.h>
#include <stdlib.h>
#define MAXLINE 1000

#undef getline
#define getline GETLINE

#undef copy
#define copy COPY

// protptypes
int GETLINE(char*, int);
void COPY(char*, char*);

#endif // GT80_H

