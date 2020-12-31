#include "reverse.h"

int main()
{

    char w1[10] = "PLAN";
    char w2[10] = "ARARA";

    printf("\n\tWord..........: %s\n", w1);
    reverse(w1);
    printf("\tWord reversed.: %s\n", w1);

    printf("\n\tWord..........: %s\n", w2);
    reverse(w2);
    printf("\tWord reversed.: %s\n\n", w2);

    return EXIT_SUCCESS;

}

