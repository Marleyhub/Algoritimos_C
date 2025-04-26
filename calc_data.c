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
    float total = 0;
    int count_pos = 0;
    int count_neg = 0;
    char buffer[BUFFER_SIZE];  

    numbers = (int *)malloc(capacity * sizeof(int)); 
    if (numbers == NULL) {
        printf("Initial memory allocation failed.\n");
        return 1;
    }

    printf("Enter numbers (type 'exit' to stop):\n");

    while (1){ 
        printf("Number-%d: ", size + 1);
        fgets(buffer, BUFFER_SIZE, stdin); 

        // Remove newline character if it exists
        buffer[strcspn(buffer, "\n")] = 0;

        if (strcmp(buffer, "exit") == 0){ 
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

        if (input > 0) {
            count_pos++;
        } else if (input < 0) {
            count_neg++;
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
        total += numbers[size - 1]; 

    }

    if (size == 0) {
        printf("No numbers were entered.\n");
        free(numbers);
        return 0;
    }

    float media = total / size;
    float neg_cent = (count_neg * 100) / size;
    float pos_cent = (count_pos * 100) / size;
   
    // Print all collected numbers
    printf("\nYou entered:\n");
    for (int i = 0; i < size; i++) {
        printf("%d \n", numbers[i]);
    }
    printf("The percentage of negative numbers is %.2f%%, with %d many negatives\n", neg_cent, count_neg);
    printf("The percentage of positive numbers is %.2f%%, with %d many positives\n", pos_cent, count_pos);
    printf("The arithmetic media of all numbers is %.2f\n", media);
    printf("\n");

    free(numbers);
    return 0;
}