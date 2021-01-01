#ifndef ENTAB_H
#define ENTAB_H
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#define MAXLINE 1000
#define LENGTH 70
#define TAB     8

// prototypes
void print_tab(void);
int calc_tab(int);
void entab(char*);
int getline(char*, int);
void visible(char*);

#endif // ENTAB_H
