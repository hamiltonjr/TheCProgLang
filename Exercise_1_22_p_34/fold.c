#include "fold.h"

/*
 * This function folds long text. It uses LENGTH in fold.h to
 * define line length and folds lines with lengths greater than
 * it. Uses also LONGEST as longest word length on English idiom.
 *
 * The authors of K_R book suggests that the code does some
 * intelligent when very long lines or lines wtihout spaces
 * are typed: it is done using split()/insert() to insert an
 * <ENTER>  in "words" longer than LONGEST, because, probably, 
 * it is not an English word and can be separated without 
 * criteria. 
 */

// this function splits a string at pos 
void split(char *s, char *t, int pos)
{
    strcpy(t, (s + pos));
    *(s + pos) = '\0';
}

// this function inserts a character in a string at pos 
void insert(char *s, char c, int pos)
{
    char t[MAXLINE];

    split(s, t, pos);
    *(s + pos) = c;
    *(s + pos + 1) = '\0';
    strcat(s, t);
}

// this function wraps lines in fixed LENGTH
void fold(char *s)
{
    int len = strlen(s);  // length of input
    bool current_last;    // true if last is refreshed
    int last = 0;         // last position with space

    current_last = false;
    for (register int i = 0, j = 0; i < len; ++i, ++j)
    {
        // position has space changed by \n
        // last was refreshed
        if (*(s + i) == ' ')
        {
            last = i;
            current_last = true;
        }

        // if last isn't refreshed, the line is long and
        // without spaces and can be separated in any
        // point (in LENGTH point, for example).
        if (j != 0 && j % LENGTH == 0)
        {
            if (!current_last)
            {
                insert(s, '\n', i);
            } else
            {
                *(s + last) = '\n';
                j = i - last;
            }
            
            // after string splitting, last must be
            // refreshed.
            current_last = false;
        }
    }
}
