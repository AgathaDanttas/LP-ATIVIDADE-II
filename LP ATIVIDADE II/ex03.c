#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main (){
    setlocale (LC_ALL,"portuguese");
    float n;
    char r [250];

    printf ("              CLASSIFICACAO DE ALUNOS:       \n");
    printf ("\n Informe sua nota:\n");
    scanf ("%f",&n);

    if (n >= 9)
    {
        strcpy (r,"EXCELENTE!");
    }
    else if (n >= 7 && n <= 8.9)
    {
        strcpy (r,"BOM!");
    }
    else if (n >= 5 && n <= 6.9 )
    {
         strcpy (r,"RAZOAVEL!");
    }
    else
    {
      strcpy (r,"INSUFICIENTE");
    }
    
    printf ("%s",r);
    return 0;
}