#include "gets.h"
#define BUFFSIZE 100

char buf[BUFFSIZE];
int bufd = 0;

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
