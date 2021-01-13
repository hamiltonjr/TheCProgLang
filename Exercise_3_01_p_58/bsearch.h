#ifndef BSEARCH_H
#define BSEARCH_H
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
 * This header organizes the BSearch project.
 */

// prototype
#undef bsearch
#define bsearch BSEARCH
int BSEARCH(int, int*, int);

int fast_bsearch(int, int*, int);
void print(int*, int);

#endif // BSEARCH_H
