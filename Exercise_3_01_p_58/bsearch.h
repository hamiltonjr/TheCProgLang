#ifndef BSEARCH_H
#define BSEARCH_H
/*
 * This header organizes the BSearch project.
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#undef bsearch
#define bsearch BSEARCH

// prototype
int BSEARCH(int, int*, int);
int fast_bsearch(int, int*, int);
void print(int*, int);

#endif // BSEARCH_H

