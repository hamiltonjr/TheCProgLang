#include "strutil.h"
#define MAXSTR 50

int main()
{
    char s[MAXSTR] = "Araçatuba-SP";
    char t1[MAXSTR] = "SP";
    char t2[MAXSTR] = "MT";

    printf("\n\t%s is in the end of %s?: %s\n", t1, s,  
            (strend(s, t1) == 1) ? "yes" : "no");

    printf("\t%s is in the end of %s?: %s\n\n", t2, s,
            (strend(s, t2) == 1) ? "yes" : "no");


    return EXIT_SUCCESS;
}
