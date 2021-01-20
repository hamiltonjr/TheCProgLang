/*
 * This function concatenate the string t at the end
 * of the string s.
 */

void strNCat(char *s, const char *t, int n)
{
    // go to the end of s
    for ( ; *s; s++);

    // go copying until the end of t
    for ( ; (*s = *t) && (--n > 0); s++, t++);
}
