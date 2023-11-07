#include <stdio.h>
#include <stdlib.h>



int main()
{
    int c,i;
    float n,m,soma = 0;
  
   
    printf("INFORME QUANTAS NOTAS VOCE QUER DIGITAR:");
    scanf("%d", &c);

    for ( i = 1; i <= c; i++)
    {
       printf ("Informe sua nota:");
       scanf ("%f",&n);
       soma += n;
    }
    if (n > 0 )
    {
      m = soma/c;
    }
     printf ("SUA MEDIA:%.1f",m);    
    return 0;
}