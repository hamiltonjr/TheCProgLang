/*
 * This function copies string t to s.
 */
void strNCpy(char *s, const char *t, int n)
{
    for ( ; (*s = *t) && (--n > 0); s++, t++);
    *(++s) = '\0';
}
