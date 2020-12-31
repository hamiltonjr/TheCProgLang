#include "strutil.h"

int strend(const char *s, const char *t)
{

    int len = strlen(s) - strlen(t);
    return (strcmp(s + len, t) == 0);

}

