/*
Exercício
Escreva um programa que informe a idade de uma pessoa e essa pessoa é menor de 18 anos. A idade deve ser calculada considerando o ano atual: 2022.

 

O usuário do programa informa o ano de nascimento da pessoa com 4 algarismos. O usuário é bem comportado.

 

<<< Interação do usuário com o programa >>>
O programa solicita que o usuário apresente o ano da pessoal, tal como abaixo.

 

    digite o ano de nascimento da pessoa:

 

<<< Apresentação >>>
O programa deve apresentar a idade e a palavra "menor", caso a pessoa tenha menos de 18 anos. Se a idade >= 18, apresenta apenas a idade.

 

Exemplo 1: ano digitado (ad) = 2001, então o programa deve apresentar:

 

    21

 

Exemplo 2: ano digitado (ad) = 2010, então o programa deve apresentar:

 

    12 menor

*/

/*CLAUDIO CHAGAS */

#include <stdio.h>

const int anoAtual = 2022;

int 
main ()
{
    int ano = 0;
    int idade = 0;

    printf("Digite o ano de nascimento da pessoa: ");
    scanf("%d", &ano);

    idade = (anoAtual-ano);

    if (idade < 18) 
    {
        printf("%d menor", idade);
    }
    else
    {
        printf("%d", idade);
    }

    return 0;
}