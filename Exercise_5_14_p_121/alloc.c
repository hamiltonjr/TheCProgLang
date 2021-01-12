#include "utils.h"

/*
 * This function allocate/free memory for variable-length 
 * arrays.
 */
static char allocbuf[ALLOCSIZE];
static char *allocp = allocbuf;

// allocate
char* alloc(int n)
{
    if (allocbuf + ALLOCSIZE - allocp >= n)
    {
        allocp += n;
        return allocp - n;
    } else
    {
        return 0;
    }
}

// free
void afree(char *p)
{
    if (p >= allocbuf && p < allocbuf + ALLOCSIZE)
    {
        allocp = p;
    }
}
