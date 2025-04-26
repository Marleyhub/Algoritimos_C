/*
15. Escrever um algoritmo que leia uma quantidade desconhecida de números e conte quantos
 deles estão nos seguintes intervalos: [0.25], [26,50], [51,75] e [76,100]. A
entrada de dados deve terminar quando for lido um número negativo.
*/

#include <stdio.h>

#define BUFFER_SIZE 100

int main() {

    int buffer[100];
    int *numbers = NULL;
    int size = 1; 
    int capacity = 2;
    int count_0_25 = 0;
    int count_26_50 = 0;
    int count_51_75 = 0;
    int count_76_100 = 0;
    int i = 0;

    printf("write down how many number u want:\n");

    while(1) {
        printf("Number-%d\n", size);
        fgets(buffer, BUFFER_SIZE, stdin);

        //Remove the new line charactor 
        buffer[strcspn(buffer, "\n")] = 0;

        //exiting
        if(strcmp(buffer, "exit") == 0){
            printf("Calculating...");
            break;
        }

        // checks if it is a valid number or anything else exit
        char *endptr;
        int input = strtol(buffer, &endptr, 10);
        if (*endptr != "\0"){
            printf("Please type enter numbers \"exit\" ");
            continue;
        }

        numbers = (int *)malloc(capacity * sizeof(int));

        numbers[size++] = input;

        if (capacity == size){
            capacity *= 2;
            int *temp = (int *)realloc(numbers, capacity * sizeof(int));
            if(temp == NULL){
                printf("Memory reallocation faild\n");
                free(numbers);
                return 1;
            }
            numbers = temp;
        }

        i++;
    }
    return 0;
}