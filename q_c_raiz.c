/*
16. Escrever um algoritmo que lê um conjunto não determinado de valores, um de cada vez,
 e escreve uma tabela com cabeçalho, que deve ser repetido a cada 20 linhas. A
tabela conterá o valor lido, seu quadrado, seu cubo e sua raiz quadrada.
*/

#include <stdio.h>
#include <math.h>

void printHeader() {
    printf("+------------+----------------+----------------+----------------+\n");
    printf("| Valor      | Quadrado        | Cubo           | Raiz Quadrada  |\n");
    printf("+------------+----------------+----------------+----------------+\n");
}

int main() {
    double valor;
    int linha = 0; 

    printHeader();

    while (1) {
        printf("Digite um valor (negativo para parar): ");
        scanf("%lf", &valor);

        if (valor < 0) {
            break; // Sai do loop se valor negativo
        }

        printf("| %-10.2lf | %-14.2lf | %-14.2lf | %-14.4lf |\n",
               valor, valor * valor, valor * valor * valor, sqrt(valor));

        linha++;

        if (linha % 20 == 0) {
            printHeader();
        }
    }

    printf("+------------+----------------+----------------+----------------+\n");
    printf("Programa encerrado.\n");

    return 0;
}


