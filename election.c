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
#include <stdlib.h>

int main () {

    int *array = NULL; 
    int size = 0;
    int capacity = 10;
    int input;

    array = (int *)malloc(capacity * sizeof(int));
    
        if (array == NULL) {
            printf("Memory allocation failed. \n");
            return 1;
        }

        printf(
            "In this election you have the following options to vote: \n"
            "1 - dog\n"
            "2 - satanas\n"
            "3 - Exu tiriri\n"
            "4 - bolsonaro\n"
            "5 - null vote\n"
            "6 - white vote\n"
            "0 - stop voting\n"
        );

        while(1) {
            printf("Write down the number that represents your candidate option:\n my vote goes to:");
            scanf("%d", &input);

            if (input < 0 || input > 6) {
                printf ("Your vote does not represent any option, try again\n");
                continue;
            }

            if (input == 0) break;

            if (size == capacity) {
                capacity *= 2;
                int *temp = realloc(array, capacity * sizeof(int));
                if (temp == NULL) {
                    printf("Memory reallocation failed.\n");
                    free(array);
                    return 1;
                }
                array = temp;
            }

            array[size++] = input;
        }
  
        printf("array: %p *array: %p,", array, *(array + 2));
        
        return 0;
    }
  

