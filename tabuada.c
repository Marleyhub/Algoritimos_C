/*
12. Escrever um algoritmo que leia 20 valores para uma variável n e,
para cada um deles, calcule a tabuada de 1 até n. Mostre a tabuada na forma:
x n = n
2 x n = 2n
3 x n = 3n
.......
n x n = n2
*/ 

#include <stdio.h>
#include <stdlib.h>

int main () {

    int *array = NULL;
    int capacity = 19;
    int size = 0;
    array = (int *)malloc(capacity * sizeof(int));

    if (array == NULL) {
        printf("Memory allocation failed. \n");
        return 1;
    }

    printf("Write down 20 numbers to make a multiplication table: \n");
    
    while(size <= capacity) {
        printf("Number-%d: ", size + 1);
        scanf("%d:",  array + size);
        size++;
    }
    
    for(int i = 0; i <= capacity; i++){
        printf("%d\n", array[i]);
    }
  
        
    
}