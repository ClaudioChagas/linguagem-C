// CLAUDIO CHAGAS 2022

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define L 5
#define C 4

int
main ()
{
    int a[L][C];
    int i;
    int j;

    for(i=0; i < L; i++)
    {
        for(j=0; j < C; j++)
        {
            a[i][j] = i;
        }
    }

    // apresenta o arraw
    for(i=0; i < L; i++)
    {
        for(j=0; j < C; j++)
        {
            printf("%2d \n", a[i][j]);
        }
        printf("\n");
    }
    return 0;

    
}