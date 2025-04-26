/*
14. Escrever um algoritmo que leia um número não determinado de valores e calcule a média aritmética dos valores lidos, a quantidade de valores positivos, a quantidade de
valores negativos e o percentual de valores negativos e positivos. Mostre os resultados.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define BUFFER_SIZE 100

int main() {
    int *numbers = NULL;
    int size = 0; 
    int capacity = 2;
    char buffer[BUFFER_SIZE];

    numbers = (int *)malloc(capacity * sizeof(int));
    if (numbers == NULL) {
        printf("Initial memory allocation failed.\n");
        return 1;
    }

    printf("Enter numbers (type 'exit' to stop):\n");

    while (1) {
        printf("Number-%d: ", size + 1);
        fgets(buffer, BUFFER_SIZE, stdin);

        // Remove newline character if it exists
        buffer[strcspn(buffer, "\n")] = 0;

        if (strcmp(buffer, "exit") == 0) {
            printf("Exiting program.\n");
            break;
        }

        // Try to convert the string to an integer
        char *endptr;
        int input = strtol(buffer, &endptr, 10);

        // Check if conversion failed
        if (*endptr != '\0') {
            printf("Invalid input. Please enter a number or 'exit'.\n");
            continue;
        }

        // Resize array if needed
        if (size == capacity) {
            capacity *= 2;
            int *temp = realloc(numbers, capacity * sizeof(int));
            if (temp == NULL) {
                printf("Memory reallocation failed.\n");
                free(numbers);
                return 1;
            }
            numbers = temp;
        }

        numbers[size++] = input;
    }

    // Print all collected numbers
    printf("\nYou entered:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    free(numbers);
    return 0;
}