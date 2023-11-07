#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n,i;

    printf("--------------------CONTAGEM REGRESSIVA----------------------\n");
    printf("Informe um numero:");
    scanf("%d", &n);
   
    for ( i = n; i >= 0 ; i--)
    {
        
        printf ("%d\n",i);
    }  

    return 0;
}