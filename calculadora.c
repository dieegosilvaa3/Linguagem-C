#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int opcao;
    float num1, num2, resultado;
    char nome[100];

    printf("Informe seu nome completo: ");
    scanf("%[^\n]s", nome); // Lê o nome completo até a nova linha

    do {
        printf("\nEscolha uma opera��o:\n");
        printf("1. Soma\n");
        printf("2. Subtra��o\n");
        printf("3. Multiplica��o\n");
        printf("4. Divis�o\n");
        printf("5. Sair\n");
        printf("Op��o: ");
        scanf("%d", &opcao);

        if (opcao >= 1 && opcao <= 4) {
            printf("Informe o primeiro n�mero: ");
            scanf("%f", &num1);
            printf("Informe o segundo n�mero: ");
            scanf("%f", &num2);
        }

        switch (opcao) {
            case 1:
                resultado = num1 + num2;
                printf("Resultado: %.2f\n", resultado);
                break;
            case 2:
                resultado = num1 - num2;
                printf("Resultado: %.2f\n", resultado);
                break;
            case 3:
                resultado = num1 * num2;
                printf("Resultado: %.2f\n", resultado);
                break;
            case 4:
                if (num2 != 0) {
                    resultado = num1 / num2;
                    printf("Resultado: %.2f\n", resultado);
                } else {
                    printf("Divis�o n�o permitida.\n");
                }
                break;
            case 5:
                printf("Fechando...\n");
                break;
            default:
                printf("Op��o Inv�lida\n");
                break;
        }
    } while (opcao != 5);

    printf("\Finalizado.\n", nome);
    return 0;
}
