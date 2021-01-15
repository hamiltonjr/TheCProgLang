#include <stdio.h>
#include <string.h>

/**
 * 
 */
void quickSort(char *v[], int left, int right)
{
    // prototype of swap (used only by qsort)
    void swap(char *v[], int i, int j);

    int last;

    if (left >= right)
    {
        return;
    }

    swap(v, left, (left + right) / 2);
    
    last = left;
    for (register size_t i = left + 1; i <= right; ++i)
    {
       if (strcmp(*(v + i), *(v + left)) < 0)
       {
          swap(v, ++last, i);
       }
    }

    swap(v, left, last);

    quickSort(v, left, last - 1);
    quickSort(v, last + 1, right);
}

void swap(char *v[], int i, int j)
{
    char *t = *(v + i);
    *(v + i) = *(v + j);
    *(v + j) = t;
}
