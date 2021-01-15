#ifndef UTILS_H
#define UTILS_H
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#define BASE 10

// prototype(s)
double a2f(char*);
void show_stack(void);

void push(double);
double pop(void);
bool empty(void);

#endif // UTILS_H
