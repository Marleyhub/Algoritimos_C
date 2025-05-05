/*
9. Escreva um algoritmo que leia 50 valores e encontre o maior e o menor deles. Mostre o resultado.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 50

int main (){

    int n[SIZE];
    int n_high = 0;
    int n_low = 500;
    int i = 0;

    srand(time(NULL));

    while(i < SIZE) {
        int n_rand = rand() % 500;
        n[i] = n_rand;
        printf("Random numer %d - %d\n",i + 1, n_rand);

        if (n[i] < n_low)
        n_low = n[i];
        if (n[i] > n_high)
        n_high = n[i];

        i++;
    }
    
    printf("This is the higest number: %d\n"
        "This is the lowest number %d\n", 
        n_high, n_low
     );
    return 0;
}