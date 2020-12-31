#include "fold.h"

/*
 * This function folds long text. It uses LENGTH in fold.h to
 * define line length and folds lines with lengths greater than.
 *
 * The authors of K_R book suggests that the code does some
 * intelligent when very long lines or lines wtihout spaces
 * are typed: it is done.
 *
 * last marks insertion point of \n case very long line. If
 * last is not refreshed, then line is long and without spaces.
 * It means this part is not a word, only a sequence of letter
 * and thus, can be separated in any place.
 */

void fold(char *s)
{

    char tmp[MAXLINE];    // temporary buffer
    int len = strlen(s);  // length of input
    bool current_last;    // true if last is refreshed
    int last = 0;         // last position with space

    for (register int i = 0, j = 0; i < len; ++i, ++j)
    {
        // position has space changed by \n
        // last was refreshed
        if (s[i] == ' ')
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
                strcpy(tmp, &s[i]);
                s[i] = '\n';
                strcat(s, tmp);
            } else
            {
                s[last] = '\n';
                j = i - last;
            }
            
            // after string splitting, last must be
            // refreshed.
            current_last = false;
        }
    }
}

