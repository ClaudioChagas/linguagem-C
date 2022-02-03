// CLAUDIO CHAGAS 2022


#include <stdio.h>

int
main ()
{
    int N = 0;      // limite para os multiplos
    int c = 0;      // contador de multiplos
    int d = 2;      // dividendo 

    printf("Primeiros multiplos de 2 e 3 na quantidade: ");
    scanf("%d", &N);

    while ( c < N)
    {
        if ( (d % 2 == 0) && ( d % 3 == 0)) 
        {
            printf("%d\n", d);
            c ++;
        }
        d ++;
    }
    return 0;
}