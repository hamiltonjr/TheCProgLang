/**
 * 
 */
int strNCmp(const char *s, const char *t, int n)
{
    for ( ; (*s == *t) && (--n > 0); s++, t++)
    {
        if (!*s)
            return 0;
    }

    return *s - *t;
}
