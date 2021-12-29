#include <stdio.h>

int 
main () 
{
    int n1 = 0;
    int n2 = 0;
    float m =0;

    printf("Digite dois numeros do conjunto dos inteiros: ");
    
    scanf ("%d""%d", &n1, &n2);

    m = ((float) n1 + n2) / 2;

    printf("Média entre %d e %d = %.2f\n", n1, n2, m);

    return 0;
}