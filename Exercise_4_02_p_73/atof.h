#ifndef ATOF_H
#define ATOF_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define MAXLINE 100 
#define BASE     10

/*
 * This header arranges AtoF Project.
 */

// prototypes
int getline(char*, int);

#undef atof
#define atof ATOF
double ATOF(char*);

#endif // ATOF_H
