/*
18. Escrever um algoritmo que lê um número não determinado de valores para m, todos inteiros e positivos, um de cada vez. Se m for par, verificar quantos divisores possui e
escrever esta informação. Se m for ímpar e menor do que 10 calcular e escrever o fatorial de m. Se m for ímpar e maior ou igual a 10 calcular e escrever a soma dos inteiros
de 1 até m.
*/

#include <stdio.h>

int main() {
    int m;

    while (1) {
        printf("Digite um valor para m (0 ou negativo para parar): ");
        scanf("%d", &m);

        if (m <= 0) {
            break; // Finaliza se m for zero ou negativo
        }

        if (m % 2 == 0) { // Se for par
            int divisores = 0;
            for (int i = 1; i <= m; i++) {
                if (m % i == 0) {
                    divisores++;
                }
            }
            printf("O número %d é par e possui %d divisores.\n\n", m, divisores);
        } else { // Se for ímpar
            if (m < 10) {
                int fatorial = 1;
                for (int i = 1; i <= m; i++) {
                    fatorial *= i;
                }
                printf("O número %d é ímpar e seu fatorial é %d.\n\n", m, fatorial);
            } else {
                int soma = 0;
                for (int i = 1; i <= m; i++) {
                    soma += i;
                }
                printf("O número %d é ímpar e a soma de 1 até %d é %d.\n\n", m, m, soma);
            }
        }
    }

    printf("Programa encerrado.\n");

    return 0;
}
