#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char op;
    int n1,n2,r;

    printf("+\n");
    printf("-\n");
    printf("Escolha a operacao:\n");
    scanf ("%c",&op);
    
   
       printf ("Digite o 1° numero:");
       scanf ("%d",&n1);
       printf ("Digite o 2° numero:");
       scanf ("%d",&n2);
   
   switch (op)
   {
   case '+':
      r = n1 + n2;
    break;

   case '-':
      r = n1 - n2;
    break;
   
   default:
    break;
   }

   printf ("%d\n",r);
    
    return 0;
}