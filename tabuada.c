/*
12. Escrever um algoritmo que leia 20 valores para uma variável n e,
para cada um deles, calcule a tabuada de 1 até n. Mostre a tabuada na forma:
1 x n = n
2 x n = 2n
3 x n = 3n
.......
n x n = n^2
*/ 

#include <stdio.h>
#include <stdlib.h>

#define SIZE 20

int main () {

    int array[SIZE];
    int i, j;

    printf("write down 20 number to make a multiplication table: \n");

    for (i = 0; i < SIZE; i++) {
        scanf("Number-%d: %d", i + 1, array[i]);
    }

    return 0; 
}