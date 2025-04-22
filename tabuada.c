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

    // pointer variable type int that represents 20 pointer for another location in memory each one can be any size
    int *tabuadas[20]; 
    
    int n[SIZE];
    int i = 0;
    int j;

    printf("write down 20 number to make a multiplication table: \n");

    while(i < SIZE) {
        printf("Number-%d: ", i + 1);
        scanf("%d", &n[i]);

        // deciding the size of each space in memory that tabuadas[i] represens.
        tabuadas[i] = (int *)malloc(n[i] * sizeof(int)); 
        
        if(tabuadas[i] == NULL){
            printf("Memory alocation for tabuada faild\n");
            return 1;
        }

        // storing and calculating the calc for eachy multiplication table
        for (j = 0; j < n[i]; j++){
            tabuadas[i][j] = n[i] * (j + 1);
        }
        i++;
    }

    i = 0;

    while(i < SIZE){
        printf("****Multiplication table for %d from 1 until %d:****\n", n[i], n[i]);
       for (j = 0; j < n[i]; j++){
            printf("%d x %d = %d \n", n[i], j + 1, tabuadas[i][j]);
       }
       i++;
       printf("\n");
    }

    return 0; 
}