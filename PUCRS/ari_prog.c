
/*
11. Escreva um algoritmo que leia um número n (número de termos de uma progressão aritmética),
a1 ( o primeiro termo da progressão) e r (a razão da progressão) e
escreva os n termos desta progressão, bem como a soma dos elementos.
*/

#include <stdlib.h>
#include <stdio.h> 

int main (){
    int n = 0; 
    int a1, r; 
    int i = 0;


    printf("How long should be the progresson: \n"); scanf("%d", &n);
    printf("which is the first term of the progression: \n"); scanf("%d", &a1);
    printf("which is the progression rate: \n"); scanf("%d", &r);

    int *array = (int *)malloc(n * sizeof(int));
    if (array == NULL) {
        printf("memory allocation faild");
        return 1;
    }

    while(i < n) { 
        array[i] = a1 + i * r;
        printf("%d", array[i]);
        if(i < n - 1){ printf("->");}
        i++; 
    }

    return 0;
}