#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main (){
    int idd;
   
    printf ("            CONTROLE DE ACESSO         \n");
    printf ("Informe sua idade:");
    scanf ("%d",&idd);


    idd >= 18 ? printf ("\nACESSO:PERMITIDO\n") : printf ("\nACESSO:NEGADO\n");


    return 0;
}