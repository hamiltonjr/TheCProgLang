#ifndef REVERSE_H
#define REVERSE_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define MAXLINE 1000
#undef getline
#define getline GETLINE

// protptype
int GETLINE(char*, int);
void reverse(char*);


#endif // REVERSE_H

