#include "itoa.h" 

void itoa_(char *s, int n)
{

    static size_t i = 0;
    int r;

    r = n % 10;
    n = n / 10;
    
    if (n != 0)
        itoa_(s, n);
    
    s[i] = r + '0';
    s[++i] = '\0';

}
    
