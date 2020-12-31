#include "utils.h"

/*
 * this function copies from a string to another.
 * This is a pointer version.
 */
void copy(char *to, const char *from)
{

    for ( ; (*to = *from); to++, from++);

}

