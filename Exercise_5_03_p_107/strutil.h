#ifndef STRUTIL_H
#define STRUTIL_H
#include <stdio.h>
#include <stdlib.h>

// prototype
#undef strcat
#define strcat STRCAT
void STRCAT(char*, const char*);

#endif // STRUTIL_H
