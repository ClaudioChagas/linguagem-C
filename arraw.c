
// CLAUDIO CHAGAS 2022


#include <stdio.h>

const int MAX = 20;

int
main ()
{
    char seq[MAX+1];

    while ((scanf("%s", seq)) != EOF)
    {
        printf("%s\n", seq);
    }
    return 0;
}