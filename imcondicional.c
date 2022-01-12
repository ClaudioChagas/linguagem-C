// CLAUDIO CHAGAS 2022

#include <stdio.h>

int 
main ()
{
    float peso ;                // admitindo peso como float
    float altura;               // admitindo altura como float
    float IMC = 0;              // admitindo a variável IMC como float

    printf("Digite seu peso em kg: ");              // mensagem para recolher dados do usuário
    
    scanf("%f", &peso);             // armazenando o valor na variável peso

    printf("Digite sua altura em metro: ");             // mensagem para recolher dados do usuário
    
    scanf("%f", &altura);               // armazenando o valor na variável altura

    IMC =(float) peso / (altura * altura);              // calculando o IMC

     printf("IMC = %.2f ", IMC);               // apresentando o resultado ao usuário

    if ( (IMC >= 18.5) || (IMC < 25) )          // verificar a situação do usuário
    {
        printf("normal");               // resposta caso o IMC do usuário esteja dentro do esperado
    } 
    else 
    {
        printf("Cuidado com a saude");          // resposta caso o IMC do usuário não esteja dentro do esperado
    }

    return 0;

}
