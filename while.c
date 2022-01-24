// CLAUDIO CHAGAS 2022


#include <stdio.h>

int 
main ()
{
    int multi = 0;
    int vari = 0;
    int result = 0;

    while (multi <= 10)
    {
        result = multi * vari;
        
        printf("%d x %d = %d\n", multi, vari, result);

        vari = vari + 1;
        multi = multi + 1;

    }

    return 0;
}