/*
6. Em uma eleição presidencial existem quatro candidatos. Os votos são informados através de códigos. Os dados utilizados para a contagem dos votos 
obedecem à seguinte
codificação:
- 1,2,3,4 = voto para os respectivos candidatos;
- 5 = voto nulo;
- 6 = voto em branco;
Elabore um algoritmo que leia o código do candidado em um voto. Calcule e escreva:
- total de votos para cada candidato;
- total de votos nulos;
- total de votos em branco;
Como finalizador do conjunto de votos, tem-se o valor 0.
*/

#include <stdio.h>

int main () {

    int *array = NULL; 
    int size = 0;
    int capacity = 10;
    int input;

    array = (int *)malloc(capacity * sizeof(int));
    if(array == NULL) {
        if (array == NULL) {
            printf("Memory allocation failed. \n");
            return 1;
        }
    }
    return 0;

}