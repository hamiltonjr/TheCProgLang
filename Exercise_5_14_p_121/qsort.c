#include "utils.h"

/*
 * This function uses quicksort generic algorithm to sort
 * some types of data in some different modes: numerical
 * and lexicograpical.
 */
void qsort(void **v, int left, int right, int (*comp)(void*, void*))
{
    void swap(void **v, int, int);
    int i, last;

    if (left >= right)
    {
        return;
    }

    swap(v, left, (left + right) / 2);

    last = left;
    for (i = left + 1; i <= right; ++i)
    {
        if ((*comp)(v[i], v[left]) < 0)
        {
            swap(v, ++last, i);
        }
    }

    swap(v, left, last);
    qsort(v, left, last - 1, comp);
    qsort(v, last + 1, right, comp);
}

/*
 * This function is a swapping elements for sorting
 * algorithm (quicksort).
 */
void swap(void **v, int i, int j)
{
    void *t;

    t = v[i];
    v[i] = v[j];
    v[j] = t;
}
