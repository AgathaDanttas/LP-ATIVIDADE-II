#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int cod;

    printf("1     -        Camiseta\n");
    printf("2     -        Calca\n");
    printf("3     -        Sapato\n");
    printf("Digite um codigo:");
    scanf("%d", &cod);

    system ("cls");
        switch (cod)
        {
        case 1:
            printf("PRODUTO: CAMISA\n");
            printf("VALOR:116.00\n");
            break;
        case 2:
            printf("PRODUTO: CALCA\n");
            printf("VALOR:216.10\n");
            break;
        case 3:
            printf("PRODUTO: SAPATO\n");
            printf("VALOR:460.90\n");
            break;

        default:
            printf("NUMERO INVALIDO!!");
            break;
        }
    return 0;
}