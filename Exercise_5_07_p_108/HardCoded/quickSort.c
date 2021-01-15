#include "utils.h"

/**
 * 
 */
void quickSort(char v[][MAXLEN], int left, int right)
{
    // prototype of swap (used only by qsort)
    void swap(char v[][MAXLEN], int i, int j);

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

void swap(char v[][MAXLEN], int i, int j)
{
    char t[MAXLEN];
    
    strcpy(t, v[i]);
    strcpy(v[i], v[j]);
    strcpy(v[j], t);
}
