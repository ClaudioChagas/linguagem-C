#include <stdlib.h>
#include <stdio.h>

typedef struct dados{  //struct com dados
    int matricula;
    char nome[20];
    int nota;
    char res;
}info;

void gravar(char *argv[], struct dados *alunos);
                                                                    // ambas funcoes
void leitura(struct dados *alunos, char *argv[]);


int 
main (int argc, char *argv[])
{
    int x = atoi(argv[2]);

    struct dados alunos[x];

    leitura(alunos, argv);
    gravar(argv, alunos);
    
    return 0;
}

void gravar(char *argv[], struct dados *alunos)
{
    int y = atoi(argv[2]);
    int x=0;
    
    FILE *arquivo;
    
    arquivo = fopen(argv[1], "w");
    
    while(x<y)
    {
        fprintf(arquivo, "Nome: %s\n", alunos[x].nome);
        fprintf(arquivo, "Matrícula: %d\n", alunos[x].matricula);
        fprintf(arquivo, "Nota: %d\n", alunos[x].nota);
        fprintf(arquivo, "Resultado: %s\n\n", &alunos[x].res);

        x++;
    }
    
    fclose(arquivo);
}

void leitura(struct dados *alunos, char *argv[])
{
    int y = atoi(argv[2]);
    int n=0;
    while(n < y)
    {
        printf("\ndigite a matrícula do aluno: ");
        scanf("%d", &alunos[n].matricula);
        printf("digite o nome do aluno: ");
        scanf("%s", alunos[n].nome);
        printf("digite a nota do aluno: ");
        scanf("%d", &alunos[n].nota);
        printf("digite o resultado do aluno: ");
        scanf("%s", &alunos[n].res);
        n++;
    }
}