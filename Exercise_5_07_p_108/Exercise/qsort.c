#include "utils.h"

void qsort(char v[MAXLINES][MAXLEN], int left, int right)
{

    // prototype of swap (used only by qsort)
    void swap(char *v[MAXLEN], int i, int j);

    int last;

    if (left >= right)
    {
        return;
    }

    swap(v, left, (left + right) / 2);
    
    last = left;
    for (register size_t i = left + 1; i <= right; ++i)
    {
       if (strcmp(v[i], v[left]) < 0)
       {
          swap(v, ++last, i);
       }
    }

    swap(v, left, last);

    qsort(v, left, last - 1);
    qsort(v, last + 1, right);

}

void swap(char *v[MAXLEN], int i, int j)
{

    char *t = v[i];
    v[i] = v[j];
    v[j] = t;

}

