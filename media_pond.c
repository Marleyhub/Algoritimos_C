/*
10. Escreva um algoritmo que leia o código de um aluno e suas três notas. Calcule a média ponderada do aluno, considerando que o peso para a maior nota seja 4 e para as
duas restantes, 3. Mostre o código do aluno, suas três notas, a média calculada e uma mensagem "APROVADO" se a média for maior ou igual a 5 e "REPROVADO" se a
média for menor que 5. Repita a operação até que o código lido seja negativo.
*/

#include <stdio.h>
#define SIZE 3

int main(){

    int code;
    int i = 1;
    float note[SIZE];
    int weight;

    printf ("Write down the student code:\n");
    scanf("%d", &code);
    while (i <= SIZE) {
        printf("Write down the note %d\n", i);
        scanf("%f", &note[i]);
        printf("%.2f\n", note[i]);
        i++;
    }
    
   
    return 0;
}