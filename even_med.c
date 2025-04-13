
/*
8. Escreva um algoritmo que calcule a média dos números digitados pelo usuário,
se eles forem pares. Termine a leitura se o usuário digitar zero (0).
*/ 

#include <stdio.h>

int main() {
    int number;
    int sum = 0;
    int count = 0;

    printf("Enter integers (0 to stop):\n");

    while (1) {
        scanf("%d", &number);

        if (number == 0) {
            break;  // Exit the loop if the user enters 0
        }

        if (number % 2 == 0) {  // Check if the number is even
            sum += number;
            count++;
        }
    }

    if (count > 0) {
        float average = (float)sum / count;
        printf("Average of even numbers: %.2f\n", average);
    } else {
        printf("No even numbers were entered.\n");
    }

    return 0;
}