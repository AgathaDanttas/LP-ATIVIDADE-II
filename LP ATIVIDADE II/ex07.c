#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int cod;

    printf("1     -       NOVO JOGO\n");
    printf("2     -       CARREGAR JOGO\n");
    printf("3     -       CONFIGURACOES\n");
    printf("Digite um codigo para continuar:");
    scanf("%d", &cod);

    system ("cls");

    switch (cod)
    {
    case 1:
        printf("NOVO JOGO!");

        break;
    case 2:
        printf("CARREGAR JOGO..");

        break;
    case 3:
        printf("CONFIGURACOES:");

        break;

    default:
        printf("NUMERO INVALIDO!!");
        break;
    }

    return 0;
}