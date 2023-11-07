#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){
   int n;
   char r [250];

   printf ("1     -      Ingles\n");
   printf ("2     -      Espanhol\n");
   printf ("3     -      Frances\n");
   printf ("Informe um numero:");
   scanf ("%d",&n);

   system ("cls");

   switch (n)
   {
   case 1:
      strcpy (r,"\nWelcome!!\n");
    break;
   
   case 2:
    strcpy (r,"\nBienvenida!!\n");
    break;
   
   case 3:
    strcpy (r,"\nAccueillir!!\n");
    break;
   
   default:
     printf ("Numero invalido");
    break;
   }

   printf ("%s",r);
 return 0;
}