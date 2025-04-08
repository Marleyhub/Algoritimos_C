
/*

Escrever um algoritmo que lê 5 valores para a, um de cada vez, 
e conta quantos destes valores são negativos, escrevendo esta informação.

*/


#include <stdio.h>

int main() {
    
    int a [5] = {-1, 2, 3, 4, -6};
    int size = sizeof(a) / sizeof(a[0]);
    int count = 0;

    for (int i = 0; i < size; i++) {
        if (a[i] < 0) {
            count ++;
        }
    }

// output
    printf("there are %d negative numbers", count);
    return 0;
}


