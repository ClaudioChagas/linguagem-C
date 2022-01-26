/*Universidade Federal de Uberlândia


Exercício
---------
Escreva um programa que apresente a área de um retângulo, cujos lados são informados pelo usuário do programa.

O usuário é bem comportado.

<<< Interação do usuário com o programa >>>
O programa solicita que o usuário apresente os lados do retângulo, tal como abaixo.

	digite um lado do retângulo:

	digite o outro lado do retângulo:

O usuário deve digitar um número do conjunto dos Reais em cada uma das digitações.

<<< Apresentação >>>

A área do retângulo dever ser apresentada com precisão de dois algarismos após o ponto decimal. Exemplo: se l1 = 2.0 e l2 = 4.0 então o programa deve apresentar:

	área = 8.00 */

#include<stdio.h>

int 
main () 
{
    float lado1 = 0;                                        // admitindo a variavel lado1 como float
    float lado2 = 0;                                        // admitindo a variavel lado2 como float
    float area = 0;                                         // admitindo a variavel area como float

    printf("Digite um lado do retangulo: ");                // solicitação do lado do retângulo ao usuário
    scanf ("%f", &lado1);                                   // armazenando dados em lado1

    printf("Digite o outro lado do retangulo: ");           // solicitação do outro lado ao usuário
    scanf("%f", &lado2);                                    // armazenando dados em lado2
    
    area = lado1 * lado2;                                   // cálculo da area

    printf("area = %.2f\n", area);                          // apresentando resultado ao usuário 
    
    
    return 0;
}


