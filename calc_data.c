/*
14. Escrever um algoritmo que leia um número não determinado de valores e calcule a média aritmética dos valores lidos, a quantidade de valores positivos, a quantidade de
valores negativos e o percentual de valores negativos e positivos. Mostre os resultados.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *numbers = NULL;
    int size = 0; 
    int capacity = 2;
    int i = 0;

    numbers = (int *)malloc(capacity * sizeof(int));
    if (numbers == NULL) {
        printf("Memory Allocation faild");
        return 0;
    }

    printf("Write down the numbers to get calculated: \n");
    while(1){
        scanf("%d", &numbers[i]);

        if(size == capacity){
            capacity *= 2;
            int *temp = realloc(numbers, capacity * sizeof(int));
            if(temp == NULL){
                printf("Memory allocation faild");
                break;
            } 
            // making numbers points to the new memory space
            numbers = temp;
        }
       
        if(numbers[i] < 0){
            exit(0);
        }
        size++;
        i++;
    }

    for (i = 0; i < size; i++){
        printf("%d", numbers[i]);
    }
    return 0;
}