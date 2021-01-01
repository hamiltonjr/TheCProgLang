#include "entab.h"

// this function changes spaces for tabs (entab)
void entab(char* s)
{
    int i = 0, j = 0;
    int len = strlen(s);
    char e[MAXLINE];
    bool blanks = false;

    // run across the string
    while (i < len)
    {
        // blank
        if (*(s + i) == ' ')
        {
            // trailing blank
            if (blanks)
            {
                i++;
                continue;
            } else
            // first blank after word: just the blank
            // that must be changed for tab
            {
                blanks = true;
                *(s + i) = '\t';
            }
        // no-blank
        } else
        {
            blanks = false;
        }

        // no-blanks and first blank after word
        *(e + j++) = *(s + i++);
    }

    // close changed string
    *(e + j) = '\0';
    strcpy(s, e);
}
