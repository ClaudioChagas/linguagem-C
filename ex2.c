

#include <stdio.h>

int combinacao(int A, int B);

 

int
main()
{
    int P = 0;
    int M = 0;
    int result=0;

    do
    {
    printf("O valor de M deve ser >= P. Caso contrario, o programa repitira!\n");
    printf("Digite o valor de P('numero de elementos do subconjunto.'): ");
    scanf("\n%d", &P);

    printf("digite o valor de M('numero de elementos do conjunto inicial'): ");
    scanf("%d", &M);
    
    } while (M < P);
    
    result = combinacao(M, P);

    printf("A quantidade de combinacoes e %d", result);
    
    return 0;
}

int
combinacao (int A, int B)
{
    // M == A
    // B == P
    int sub=0;
    int result = 0;
    int fatorialA=1;
    int fatorialB=1;
    int fatorialSub=1;

    sub = (A - B);

    while(A > 1)
    {
        fatorialA= fatorialA * A;
        A--;
    }
    
    while(B > 1)
    {
        fatorialB= fatorialB * B;
        B--;
    }

    while (sub> 1)
    {
        fatorialSub = fatorialSub * sub;
        sub--;
    }

    result = fatorialA/(fatorialB * fatorialSub);

    return (result);
    

}