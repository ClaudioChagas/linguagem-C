#include <stdio.h>
#include <stdlib.h>

void crescente(char *argv[ ]);


int 
main (int argc, char *argv[ ])
{
    int i;
   int val =0;
  
   
   val = atoi(argv[1]);
   int vetor[val];

    if (val > 30)
    {
        printf("\ncoloque ate 30 parametros!");
        return 1;
    }
   
    
    crescente(argv);
    
    return 0;
}
    


void
crescente(char *argv[ ])
{
    int i;
    int res=0;
    int j=0;
    int val = atoi(argv[1]);
    
    int vetor[val];
    
    for (i=0; i < val; i++)
    {
        printf("Digite o parametro: ");
        scanf("%d", &vetor[i]);
    }
    for (i=0; i< val; i++)
    {
        for (j=0; j< val; j++)
        {
            if(vetor[j]>vetor[i]) 
            {
                res = vetor[i];
                vetor[i]=vetor[j];
                vetor[j]= res;
            }
        }
    }
    
    
    
    printf("Vetor em ordem crescente: ");
    
    for(i=0; i<val; i++)
    {
        printf(" %d", vetor[i]);
    }
    
    
}