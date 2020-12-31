#ifndef STRUTIL_H
#define STRUTIL_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// prototype
#undef strncat
#define strncat my_strncat
void my_strncat(char*, const char*, int);

#undef strcpy
#define strncpy my_strncpy
void my_strncpy(char*, const char*, int);

#undef strncmp
#define strncmp my_strncmp
int my_strncmp(const char*, const char*, int);

#endif // STRUTIL_H

