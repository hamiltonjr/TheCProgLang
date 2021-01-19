/*
 * This function converts visible representatiohns to
 * escape sequences.
 */
void unescape(char *r, char *s)
{
    for ( ; *s; r++, s++)
    {
       if (*s == '\\')
       {
           s++;
           switch(*s)
           {
               case 't':
                   *r = '\t';
                   break;
               case 'b':
                   *r = '\b';
                   break;
               case 'n':
                   *r = '\n';
                   break;
           }
       } else
       {
           *r = *s;
       }
    }

    *r = '\0';
}
