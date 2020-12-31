#include "detab.h" 

void visible(char* s)
{

    register size_t i = 0, j = 0;
    char e[MAXLINE];

    while (s[i] && i < MAXLINE)
    {
        if (s[i] == '\t')
        {
            e[j++] = '\\';
            e[j++] = '\\';
            e[j++] = 't';
        } else if (s[i] == '\b')
        {
            e[j++] = '\\';
            e[j++] = '\\';
            e[j++] = 'b';
        } else if (s[i] == '\\')
        {
            e[j++] = '\\';
            e[j++] = '\\';
        } else
        {
            e[j++] = s[i];
        }

        i++;
    }
    e[j] = '\0';
    strcpy(s, e);

}

