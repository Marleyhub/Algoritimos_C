/*
5. Construir um algoritmo que calcule a média aritmética de vários valores inteiros positivos, lidos externamente. O final da leitura acontecerá quando for lido um valor
negativo.
*/

#include <stdio.h>

#define SIZE 10

int main () {

    int num [SIZE];
    int num_total = 0;

// Input loop
    for (int i = 0; i < SIZE; i++) {
        printf("Write dowmn only positive integers numbers: ");
        scanf("%d", &num[i]);

        if (num[i] < 0) {
            printf("This is not a positive integer");
            return 1;
        } else {
            num_total += num[i];
        }
    }

// calc
    int num_media = num_total / SIZE;
    printf("The media of the numbers u've inputed is %d", num_media);

    return 0;
}