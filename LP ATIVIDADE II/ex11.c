#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int cod;

    do
    {
        printf("\nInforme o codigo de acesso:");
        scanf("%d", &cod);
        printf("\n");
        if (cod != 81916020)
        {
            printf("CODIGO INVALIDO\n");
        }

    } while (cod != 81916020);

    system ("cls");

    printf("\n        Bem vindo(a)        \n");

    return 0;
}