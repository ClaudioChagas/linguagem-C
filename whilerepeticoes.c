#include <stdio.h>

int 
main ()
{
    int valor = 0;
    int result = 0;
    int repeticoes = 0;
    int multi = 0;
    int cpl = 0;

    printf("Digite o valor da taboada: ");
    scanf("%d", &valor);

    printf("Digite o valor das repeticoes: ");
    scanf("%d", &repeticoes);

    while (multi < repeticoes)
    {
        result = multi * valor;
        
        printf("%d x %d = %d\n", multi, valor, result);

        multi = multi + 1;
        cpl++;
        
        if (cpl == 3)
        {
            printf("\n");
            cpl = 0;
        }

    }
    if ( cpl > 0)
    {
        printf("\n");
    }
    
    return 0;
}