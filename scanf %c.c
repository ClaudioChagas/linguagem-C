


#include <stdio.h>


int 
main ()
{
    int i;
    char s[10];



    for ( i =0; scanf("%c", &s[i]) && s[i] != "\n"; i++)
    ;
    
    
    s[i] = "\0";

    printf("%s\n", s);



    return 0;
}

/*

int const T = 5;

int 
main ()
{
    int i;
    char s[T+1];



    for ( i =0; i < T && scanf("%c", &s[i]) && s[i] != "\n"; i++)               // recolher string
    ;
    
    if (i == T)
    {
        printf("digite ate %d caracteres\n", T);
        return 3;
    }
    
    s[i] = "\0";

    for ( i =0; s[i] != "\0"; i++)                                  // apresentar a string
    {
        printf("%c", s[i]);
    }
    printf("\n");

    return 0;
}

*/