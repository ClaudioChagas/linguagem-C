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

     printf("IMC = %.2f\n ", IMC);               // apresentando o resultado ao usuário

    if ( (IMC < 18.5) )         // verificar a situação do usuário
    {
        printf("Abaixo do peso");           
    } 
    else if ((IMC >= 18.5) && (IMC <= 24.9)) 
    {
        printf("peso normal");          
    }
    else if ((IMC >= 25 ) && (IMC <= 29.9))
    {
        printf("Sobrepeso");
    }
    else 
    {
        printf("Obesidade");
    }

    return 0;
}