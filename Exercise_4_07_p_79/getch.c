#include "calc.h"
#define BUFFSIZE 100

static char buf[BUFFSIZE];
static int bufd = 0;

int getch(void)
{
    return (bufd > 0) ? buf[--bufd] : getchar();
}

void ungetch(int c)
{
    if (bufd >= BUFFSIZE)
    {
        printf("ERROR: too many characters\n");
    } else 
    {
        buf[bufd++] = c;
    }

}

void ungets(char *s)
{
 
    int len = strlen(s);

    while (--len)
    {
        ungetch(s[len]);
    }

}

