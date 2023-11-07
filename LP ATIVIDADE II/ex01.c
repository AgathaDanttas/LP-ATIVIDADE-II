#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
   float t;
   char r [250];
   
   printf ("Informe a temperatura externa:\n");
   scanf ("%f",&t);
   
   if (t > 25)
   {
       strcpy (r,"Clima Ensolarado!");
   }
   else if (t < 15)
   {
       strcpy (r,"Clima Chuvoso!");
   }
   else if (t >= 15 && t <= 25)
   {
       strcpy (r,"Clima  Nublado!");
   }
   
   printf ("%s",r);
    return 0;
}