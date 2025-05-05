/*
19. Faça um algoritmo que leia uma quantidade não determinada de números positivos. Calcule a quantidade de números pares e ímpares, a média de valores pares e a
média geral dos números lidos. O número que encerrará a leitura será zero.
*/

#include <stdio.h>

int main() {
    int numero;
    int qtdPares = 0, qtdImpares = 0;
    int somaPares = 0, somaTotal = 0;
    int qtdTotal = 0;

    while (1) {
        printf("Digite um número positivo (0 para encerrar): ");
        scanf("%d", &numero);

        if (numero == 0) {
            break; // Finaliza se número for zero
        }

        if (numero > 0) {
            somaTotal += numero;
            qtdTotal++;

            if (numero % 2 == 0) {
                qtdPares++;
                somaPares += numero;
            } else {
                qtdImpares++;
            }
        } else {
            printf("Número inválido! Digite apenas positivos ou 0 para sair.\n");
        }
    }

    printf("\nQuantidade de números pares: %d\n", qtdPares);
    printf("Quantidade de números ímpares: %d\n", qtdImpares);

    if (qtdPares > 0) {
        printf("Média dos números pares: %.2f\n", (float)somaPares / qtdPares);
    } else {
        printf("Nenhum número par foi digitado.\n");
    }

    if (qtdTotal > 0) {
        printf("Média geral dos números: %.2f\n", (float)somaTotal / qtdTotal);
    } else {
        printf("Nenhum número foi digitado.\n");
    }

    printf("Programa encerrado.\n");

    return 0;
}
