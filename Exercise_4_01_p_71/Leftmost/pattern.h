#ifndef PATTERN_H
#define PATTERN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXLINE 1000

#undef getline
#define getline GETLINE
int GETLINE(char*, int);
int strindex(char*, char*);

#endif // PATTERN_H

