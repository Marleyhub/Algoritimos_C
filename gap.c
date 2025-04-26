/*
15. Escrever um algoritmo que leia uma quantidade desconhecida de números e conte quantos
 deles estão nos seguintes intervalos: [0.25], [26,50], [51,75] e [76,100]. A
entrada de dados deve terminar quando for lido um número negativo.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define BUFFER_SIZE 100

int main() {

    char buffer[BUFFER_SIZE];
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
        printf("Number-%d ", size);
        fgets(buffer, BUFFER_SIZE, stdin);

        //Remove the new line charactor 
        buffer[strcspn(buffer, "\n")] = 0;

        //exiting
        if(strcmp(buffer, "exit") == 0){
            printf("Calculating...\n\n\n");
            break;
        }

        // checks if it is a valid number or anything else to exit
        char *endptr;
        int input = strtol(buffer, &endptr, 10);
        if (*endptr != '\0'){
            printf("Please type enter numbers \"exit\" ");
            continue;
        }

        //memory allocation
        numbers = (int *)malloc(capacity * sizeof(int));

        numbers[size++] = input;

        //memory reallocation
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

        if (input >= 0 && input <=25)
            count_0_25++;
        else if (input >= 26 & input <=50)
            count_26_50++;
        else if (input >= 51 && input <=75)
            count_51_75++;
        else if (input >= 76 && input <=100)
            count_76_100++;
        i++;
    }

    printf(
        "The are %d numbers between 0 and 25\n"
        "The are %d numbers between 26 and 50\n"
        "The are %d numbers between 51 and 75\n"
        "The are %d numbers between 78 and 100\n",
        count_0_25, count_26_50, count_51_75, count_76_100
    );
    return 0;
}