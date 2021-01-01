#ifndef DETAB_H
#define DETAB_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXLINE 1000
#define LENGTH 70
#define TAB     8

// prototypes
void print_tab(void);
int calc_tab(int);
void detab(char*);
int getline(char*, int);
void visible(char*);

#endif // DETAB_H

