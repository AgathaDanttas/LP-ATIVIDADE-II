#include <stdio.h>

int main() {
    int cod;
    float quil,dist,tem,conv;

    while (1) {
        printf("     Escolha uma opcao de conversao:    \n");
        printf("1   -   Quilometros para Milhas\n");
        printf("2   -   Celsius para Fahrenheit\n");
        printf("0   -   Sair do programa\n");
        scanf("%d", &cod);

        if (cod == 0) {
            printf("Programa encerrado!\n");
            break;
        }

        switch (cod) {
            case 1:
                printf("Digite a distancia em quilometros: \n");
                scanf("%f", &quil);
                dist = quil * 0.621371; 
                printf("%.2f quilometros e igual a %.2f milhas.\n",quil, dist);
                break;
            case 2:
                printf("Digite a temperatura em graus Celsius: ");
                scanf("%f", &tem);
                conv = tem * 9 / 5 + 32; 
                printf("%.2f graus Celsius e igual a %.2f graus Fahrenheit.\n", tem, conv);
                break;
            default:
                printf("ESCOLHA UMA OPCAO VALIDA\n");
        }
    }

    return 0;
}
