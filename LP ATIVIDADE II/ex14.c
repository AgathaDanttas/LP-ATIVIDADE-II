#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
    int n, par = 0, imp;
    float somap = 0, somai = 0;
    float mp, mi;

    do
    {
        printf("Informe um numero inteiro:");
        scanf("%d", &n);

        if (n > 0)
        {
            if (n % 2 == 0)
            {
                par++;
                somap += n;
            }
            else
            {
                imp++;
                somai += n;
            }
        }

    } while (n > 0);

    if (par > 0)
    {
        mp = somap / par;
        printf("NUMEROS PARES:%d\n", par);
        printf("MEDIA PAR:%.1f\n", mp);
    } else{
        printf("\nNenhum numero par informado!\n");
    }

    if (imp > 0)
    {
        mi = somai / imp;
        printf("\nNUMEROS IMPARES:%d\n", imp);
        printf("MEDIA IMPAR:%.1f", mi);
    }
    else
    {
       printf("\nNenhum numero impar informado!\n");
    }

    return 0;
}