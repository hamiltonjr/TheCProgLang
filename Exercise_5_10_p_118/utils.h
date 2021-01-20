#ifndef UTILS_H
#define UTILS_H
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#define BASE 10

// prototypes
double a2f(char*);
void show_stack(void);

// prototypes for stact ADT
void push(double);
double pop(void);
bool empty(void);

#endif // UTILS_H
