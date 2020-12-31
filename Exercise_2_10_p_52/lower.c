#include "lower.h"

/*
 * This function turm a character to lowercase.
 *
 * input..: a character, possibly in uppercase.
 * output.: a character in lowercase or the same when it
 * is not applyable.
 */
int lower(int c)
{

    return (c >= 'A' && c <= 'Z') ? (c + 'a' - 'A') : c;

}

