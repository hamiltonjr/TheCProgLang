#ifndef ATOF_H
#define ATOF_H
/*
 * This header arranges AtoF Project.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define MAXLINE 100 
#define BASE     10

#undef getline
#define getline GETLINE
int GETLINE(char*, int);

#undef atof
#define atof ATOF
double ATOF(char*);

#endif // ATOF_H

