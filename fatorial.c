/*
13. Escrever um algoritmo que leia um número n que indica quantos valores devem ser lidos a seguir. Para cada número lido, mostre uma tabela contendo o valor lido e o
fatorial deste valor.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int i = 0;
    int size = 0;
    int *numbers = NULL;
    unsigned long long *fatored = malloc(size * sizeof(unsigned long long));

    // input
    printf("Write down how many fatorials do you want: \n");
    scanf("%d", &size);

    // allocating memory
    numbers = (int *)malloc(size * sizeof(int));
    fatored = (unsigned long long *)malloc(size * sizeof(unsigned long long));

    if(numbers == NULL || fatored == NULL){
        printf("Memory allocation faild");
        return 1;
    }

    printf("Write down the numbers that you want to have the fatorial: \n");

    // inputs
    while (i < size){
        printf("Number-%d:", i + 1);
        scanf("%d", &numbers[i]);
        i++;
    }

    // fatirial calc
    for (int j = 0; j < size; j++){
        unsigned long long fatorial = 1;
        for (int k = 1; k <= numbers[j]; k++){
            fatorial *= k;
        }
        fatored[j] = fatorial;
    }

    // result
    printf("**********results*********\n");
    for (i = 0; i < size; i++){
        printf("%d! = %llu\n", numbers[i], fatored[i]);
    }

    free(numbers);
    free(fatored);
    
    return 0; 
}