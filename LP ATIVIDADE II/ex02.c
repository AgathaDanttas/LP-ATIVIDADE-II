#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
   int d;
   float v,vp,des;
   
   printf (          "ESCOLHA UM NUMERO       \n");
   printf ("1        =          DOMINGO\n");
   printf ("2        =          SEGUNDA\n");
   printf ("3        =          TERCA  \n");
   printf ("5        =          QUINTA \n");
   printf ("6        =          SEXTA  \n");
   printf ("7        =         SABADOO \n");
  
  do 
  {
   printf ("Digite o N correspondente ao dia da semana:");
   scanf ("%d",&d);
  }while (d > 7 || d <= 0);
  
   printf ("Digite o valor da coompra:");
   scanf ("%f",&v);  
   
   des = d == 1 || d == 7 ? v *0.15 : v * 0.10;
   vp = v - des;
   
   printf ("VALOR A PAGAR: %.1f\n",vp);
   
    return 0;
}