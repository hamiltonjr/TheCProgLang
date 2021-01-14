#ifndef ITOA_H
#define ITOA_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BASE 10

/*
 * This header arranges Special ItoA Project.
 */

// prototype
#undef itoa
#define itoa ITOA
void ITOA(int, char*, int);

#endif // ITOA_H
