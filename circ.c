/*Universidade Federal de Uberlândia

Exercício
---------
Escreva um programa que apresente a área de um círculo, cujo raio é informado pelo usuário do programa.

O programa captura um número do conjunto dos Reais, correspondente ao raio de um círculo. Em seguida, o programa a área desse círculo.

<<< Apresentação >>>
A área deve ser apresentada com precisão de quatro algarismos após o ponto decimal. Exemplo: considerando raio = 5.0 e PI = 3,141593, então o programa deve apresentar:

	média do círculo de R = 5.0 eh 78.5398 */


#include <stdio.h>

int
main() 
{
    float PI = 3.141593;                // admitindo pi como float
    float raio;                         // admitindo raio como float
    float area;                         // admitindo area como float

    printf("Digite o raio do circulo: ");               // comandos para resgatar dados do usuario
    scanf("%f", &raio);

    area = PI * (raio * raio);                          // calculo da area

    printf("Media do circulo de R = %.4f eh %.4f", raio, area);             // print da resposta na tela do usuario

    return 0;

}