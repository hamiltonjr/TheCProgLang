#ifndef LONGEST_H
#define LONGEST_H

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

#endif // LONGEST_H

