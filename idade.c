// CLAUDIO CHAGAS 2022 


#include <stdio.h>

int 
main () 
{
    int d = 0;
    int ano = 0;
    int meses = 0;
    int dias = 0;
    int restoMeses = 0;
    int restoAno = 0;


    printf("Digite a quantidade de dias: ");
    scanf("%d", &d);

    ano = (d / 365);

    restoAno = (d % 365);

    meses = (restoAno / 30);
    
    restoMeses = (restoAno % 30);

    dias = restoMeses;

    printf("Ano(s): %d\n", ano);
    printf("Mes(es): %d\n", meses);
    printf("dia(s): %d\n", dias);

    
}