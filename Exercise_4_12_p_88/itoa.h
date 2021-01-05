#ifndef ITOA_H
#define ITOA_H
#include <stdio.h>
#include <stdlib.h>

// prototype
#undef itoa
#define itoa itoa_
void itoa_(char*, int);

#endif // ITOA_H
