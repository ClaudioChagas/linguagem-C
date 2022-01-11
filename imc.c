/*Universidade Federal de Uberlândia
Faculdade de Computação


Exercício
---------
Escreva um programa que apresente o Índice de Massa Corporal (IMC) de uma pessoa. Esse índice é obtido pela seguinte fórmula:
	peso / (altura * altura)

O peso é em Kg e a altura em metro. Por exemplo: peso = 68.3 e altura = 1.70

O programa captura o peso e a altura por meio da digitação do usuário.

<<< Apresentação >>>
O IMC deve ser apresentado com precisão de dois algarismos após o ponto decimal. Exemplo: considerando peso = 68.3 e altura = 1.70, então o programa deve apresentar:

	IMC = 23.63*/

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

    printf("IMC = %.2f", IMC);               // apresentando o resultado ao usuário

    return 0;

}


