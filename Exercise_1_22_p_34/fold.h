#ifndef FOLD_H 
#define FOLD_H
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#define MAXLINE 1000
#define LENGTH 60
#define TAB     8
#undef getline
#define getline GETLINE

// prototypes
void fold(char*);
int GETLINE(char*, int);

#endif // FOLD_H

