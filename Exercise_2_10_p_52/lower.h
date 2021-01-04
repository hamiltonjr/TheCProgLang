#ifndef LOWER_H
#define LOWER_H

/*
 * This header organizes the Lower project.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#undef lower
#undef tolower
#define lower LOWER
#define tolower TOLOWER

// prototypes
int LOWER(int);
void TOLOWER(char*);

#endif // LOWER_H
