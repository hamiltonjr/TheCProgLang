#include "detab.h" 


void detab(char *s)
{

    char e[MAXLINE];
    int i = 0, j = 0;

    while (*(s + i) && i < MAXLINE)
    {
        if (*(s + i) == '\t')
        {
            int ltab = TAB - j%TAB;
            while (ltab-- > 0)
            {
                *(e + j++) = ' ';
            }
        } else
        {
            *(e + j++) = *(s + i);
        }

        i++;
    }
    *(e + j) = *(s + i);
    strcpy(s, e);

}

