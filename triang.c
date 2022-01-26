/*Universidade Federal de Uberlândia

Exercício
---------
Escreva um programa que apresente a área de um triângulo, cuja base e altura são informados pelo usuário do programa.

O usuário é bem comportado.

<<< Interação do usuário com o programa >>>
O programa solicita que o usuário apresente os lados do retângulo, tal como abaixo.

	digite a base do triângulo:

	digite a altura do triângulo:

O usuário deve digitar um número do conjunto dos Reais em cada uma das digitações.

<<< Apresentação >>>

A área do retângulo dever ser apresentada com precisão de dois algarismos após o ponto decimal. Exemplo: se base = 2.0 e altura = 4.0 então o programa deve apresentar:

	área triang. = 4.00 */

#include<stdio.h>

int
main ()
{
    float base = 0;                                         // admitindo a variavel base como float
    float altura = 0;                                       // admitindo a variavel altura como float
    float area = 0;                                         // admitindo a variavel area como float

    printf("Digite a base do triangulo: ");                 // solicitação da base do triângulo ao usuário
    scanf("%f", &base);                                     // armazenando dados em case

    printf("Digite a altura do triangulo ");                // solicitação da altura do triângulo ao usuário
    scanf("%f", &altura);                                   // armazenando dados em altura

    area = (base * altura) / 2;                             // cálculo da área 

    printf("area triang. = %.2f", area);                    // apresentando resultado ao usuário

    return 0;
}