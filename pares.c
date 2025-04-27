#include <stdio.h>

int main() {
    int m, n;

    while (1) {
        printf("Digite os valores de m e n (0 ou negativo para parar): ");
        scanf("%d %d", &m, &n);

        if (m <= 0 || n <= 0) {
            break; 
        }

        int soma = 0;
        printf("Números: ");
        for (int i = 0; i < n; i++) {
            printf("%d ", m + i);
            soma += (m + i);
        }
        printf("\nSoma = %d\n\n", soma);
    }

    printf("Programa encerrado.\n");

    return 0;
}
