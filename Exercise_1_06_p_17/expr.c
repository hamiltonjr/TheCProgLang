#include <stdio.h>

int main()
{

    printf("\n\tType a character and <ENTER>...\n\t");
    int b = getchar() != EOF;
    printf("\tThe expression has value = %d\n\n", b);
    return 0;

}

