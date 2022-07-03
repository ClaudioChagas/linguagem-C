#include <stdio.h>
#include <string.h>

struct dados           //declaraçao da struct
{
  long int matricula;
  char nome[20];
  int idade;
  char cargo;
  float salario;
};

typedef struct dados info;

void cadastro(struct dados func[10]); //chamada funcao com struct

void consulta(struct dados func[10]);

int main()              // main
{
  struct dados func[10];

  cadastro(func);

  consulta(func);

  return 0;
}

void cadastro(struct dados func[10])         //funcao cadastro
{
    char x[20];
    int i=0;

    while(i<10)
    {
        printf("Digite o numero de matricula: ");
        scanf("%ld", &func[i].matricula);
        if(func[i].matricula==0)
    {
        break;
    }
        printf("Digite o nome do funcionario: ");
        scanf("%s", func[i].nome);
        printf("Digite a idade do funcionario: ");
        scanf("%d", &func[i].idade);
        printf("Digite o cargo do funcionario: ");
        scanf("%s", &func[i].cargo);
        printf("Digite o salário do funcionario: ");
        scanf("%f", &func[i].salario);
        printf("\n");
        i++;
    }
}

void consulta(struct dados func[10])             //funcao consulta
{
  char x[20];
  char y[4];
  int i=0;
  strcpy(y, "FIM");

  printf("Qual funcionario deseja consultar? ");
  while(scanf("%s", x))
  {
    i = 0;
    if(strcmp(x, y)==0)
    {
        break;
    }
    if((strcmp(x, y))!=0)
    {
        while(strcmp(x, func[i].nome)!=0)
        {
            i++;
            if(i>9)
            {
                printf("\nDIGITE UM FUNCIONARIO VALIDO: ");
                scanf("%s", x);
                i=0;
            }
        }
        if(strcmp(x, func[i].nome)==0)
        {
            printf("Matricula: %ld\n", func[i].matricula);
            printf("Idade: %d\n", func[i].idade);
            printf("Cargo: %c\n", func[i].cargo);
            printf("Salario: %.2f\n", func[i].salario);
        }
    }
    printf("\nQual funcionario deseja consultar? ");
  }
}
