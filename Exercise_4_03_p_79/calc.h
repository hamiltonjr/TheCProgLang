#ifndef CALC_H
#define CALC_H
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>
#define MAXOP   100
#define MAXVAL  100
#define NUMBER  '0'
#define NEGATIVE '-'
#define BASE     10

int getop(char []);
void push(double);
double pop(void);
int getch();
void ungetch(int);

#undef atof
#define atof ATOF
double ATOF(char []);

#endif // CALC_H
