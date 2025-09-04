/*
25. Uma empresa deseja aumentar seus preços em 20%. Faça um algoritmo que leia o código e o preço de custo de cada produto e calcule o preço novo.
    Calcule também, a média dos preços com e sem aumento. Mostre o código e o preço novo de cada produto e, no final, as médias.
    A entrada de dados deve terminar quando for lido um código de produto negativo. (Use o comando enquanto-faça)
*/
#include <stdio.h> 
#include <stdlib.h>

#define SIZE 10
#define MAX_NAME_LEN 100

int main (){
    int descount;
    float media;
    float media_desc;
    int i, j;
    int str_size = 100;

    char **products = malloc(SIZE * sizeof(char *));
    if (products == NULL) {
        perror("Failed to allocate memory for products");
        return 1;
    }

    for(i = 0; i < SIZE; i++){
        products[i] = malloc(str_size * sizeof(char));
        return 1;
    }

    for (int i = 0; i < SIZE; i++) {
        printf("Enter name for product %d: ", i + 1);
        fgets(products[i], MAX_NAME_LEN, stdin);
        products[i][strcspn(products[i], "\n")] = '\0';  
    }

    while(0){
        printf("register product and a code will be assigned for it");
        scanf("Product: %s", products);
        if (-1){
            return 1;
        }
        continue;
    }
    

    do{

    }
    while(!-1);

    return 0;
}