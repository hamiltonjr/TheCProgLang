/*
 * This function converts escape sequences to visible
 * representatiohns of it.
 */
void escape(char *s, char *t)
{
    for ( ; *t != '\0'; t++)
    {
        switch(*t)
        {
            case '\t':
                *s = '\\'; s++;
                *s = 't'; s++;
                break;
            case '\b':
                *s = '\\'; s++;
                *s = 'b'; s++;
                break;
            case '\n':
                *s = '\\'; s++;
                *s = 'n'; s++;
                break;
            default:
                *s = *t; s++;
                break;
        }
    }

    *s = '\0';
}
