/* Universidade Federal de Uberlândia
Linguagem C por prof.Autran Macedo (FACOM)

Problema
--------
Apresentar o MDC (máximo divisor comum) entre os valores N1 e N2.

Restrições
----------
* A solução para o problema deve ser um programa para computador escrito na linguagem C.

* O programa em C deve estar em conformidade com o Padrão de Codificação da disciplina.

* N1 e N2 são números do conjunto dos Naturais e digitados pelo usuário do programa.

* Se N1 < N2, então o programa deve apresentar 0 (zero) e terminar.

* Se N2 == 0, o programa deve apresentar uma mensagem de erro (ex.: “divisão por zero”) e terminar.

* O cálculo do MDC deve ser obtido por meio do procedimento de divisões sucessivas abaixo:
	Dividendo = N1
	Divisor = N2

div: 	Obter o resto R da divisão entre Dividendo e Divisor
	se R == 0, então
		o MDC entre A e B é o valor em Divisor
	se Resto != 0, então 
		Dividendo = Divisor
		Divisor = Resto
		volta para div.

* Com relação ao procedimento de divisões sucessivas apresentado acima:
	- “volta para div” é um goto. Contudo, o PROGRAMA NÃO PODE TER GOTO;
	- descobrir como sair do loop é tarefa do/a programador/a.

Apresentação
------------
Se N1 = 36 e N2 = 24, então o programa deve apresentar

	MDC = 8

Considerações
-------------
* O usuário é bem comportado. */

// CLAUDIO CHAGAS 2022



#include <stdio.h>

int 
main ()
{
    int N1 = 0;                 // declarando variavel N1
    int N2 =0;                  // declarando variavel N2
    float R =0;                    // declarando a variavel resto

    printf("Digite o valor de n1: ");           //entrada de dados N1
    scanf("%d", &N1);

    printf("Digite o valor de n2: ");           // entrada de dados N2
    scanf("%d", &N2);

    if (N1 < N2)                                // condicao que a divisao nao é valida 
    {
        printf("0");
        return 1;
    }
    else if (N2 == 0)                           // condicao que a divisao nao e valida por dividir por 0
    {
        printf("Divisão por 0!");
        return 3;
    }
    else 
    {
       
       R = N1 % N2;                             // realizando a conta
       
       while (R != 0)                           // caso reste algo entrara no while ou passara direto
        {
            N1 = N2;
            N2 = R;

            R = N1 % N2;
        }
        
        printf("MDC = %d", N2);                 // resultado final

           
    }
    
    return 0;
}
