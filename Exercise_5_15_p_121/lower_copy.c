#include "utils.h"

void lower_copy(char *s, char *t)
{

    while (*t)
        *s++ = tolower(*t++);
    *s = '\0';
}

int main()
{


    char t[10] = "ROSA";
    char s[10];

    printf("\n\tBefore...: %s\n", t);
    lower_copy(s, t);
    printf("\tAfter....: %s\n\n", s);

    return EXIT_SUCCESS;

}

