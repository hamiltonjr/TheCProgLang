#include "expand.h"

/*
 * This function expands sequences like:
 * 
 * a-z to abc...z
 * A-Z to ABC...Z and
 * 0-9 to 01...9
 *
 * Compound sequences like c-k2-7 are accepted.
 * Something like -a, c-, -a-b, -a-b-c, a-7 are
 * considered errors.
 *
 * input..: a string with sequence representation.
 * output.: a string with resulting sequence.
 */

void expand(char *s1, char *s2)
{
    enum status {
        NOPER,   // no operation
        BNUMR,   // begin numeric sequence
        BALPH,   // begin alphabetic sequence
        HIFEN,   // hifen
        ENUMR,   // end numeric sequence
        EALPH,   // end alphabetic sequence
        XPAND    // enpandiong sequence
    } st, begin;

    char b, e;   // begin character and end character of sequence

    st = NOPER;
    
    for ( ; *s2; s2++)
    {
        // begins alphabetic expanded sequence
        if (isalpha(*s2) && st == NOPER)
        {
            st = BALPH;
            begin = BALPH;
            b = *s2;
        } else 
        // begins nemeric expanded sequence
        if (isdigit(*s2) && st == NOPER)
        {
            st = BNUMR;
            begin = BNUMR;
            b = *s2;
        } else
        // hiphen in the right place
        if (*s2 == '-' && (st == BNUMR || st == BALPH))
        {
            st = HIFEN;
        } else
        // end of alphavetic sequence
        if (isalpha(*s2) && st == HIFEN && begin == BALPH)
        {
            st = EALPH;
            e = *s2;
        } else
        // end of numeric sequence
        if (isdigit(*s2) && st == HIFEN && begin == BNUMR)
        {
            st = ENUMR;
            e = *s2;
        } else
        {
            printf("ERROR: expected letters or digits and an hifen " 
                   "between it!\n");
            exit(EXIT_FAILURE);
        }

        if (st == EALPH || st == ENUMR)
        {
            st = XPAND;
            if (b < e)
            {
                for (char c = b; c <= e; c++, s1++)
                {
                    *s1 = c;
                }
            } else
            {
                for (char c = b; c >= e; c--, s1++)
                {
                    *s1 = c;
                }
            }
        
            *s1 = '\0';
            st = NOPER;
        }
    }

    if (st != NOPER)
    {
        printf("ERROR: something out of place!\n");
        exit(EXIT_FAILURE);
    }
}
