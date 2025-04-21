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

    int n[SIZE];
    int *tabuadas[20];
    int i = 0;
    int j;

    printf("write down 20 number to make a multiplication table: \n");

    while(i < SIZE) {
        printf("Number-%d: ", i + 1);
        scanf("%d", &n[i]);

        tabuadas[i] = (int *)malloc(n[i] * sizeof(int));
        
        if(tabuadas[i] == NULL){
            printf("Memory alocation for tabuada faild\n");
            return 1;
        }

        for (j = 0; j < n[i]; j++){
            tabuadas[i][j] = n[i] * (j + 1);
            // printf("%d\n", tabuadas[i][j]);
        }
        i++;
    }



    return 0; 
}