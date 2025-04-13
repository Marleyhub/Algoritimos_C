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
    float calc = 0.0f; 
    float high_note_w = 0.0f;
    float note_w = 0.0f;
    int max_weight = 4;
    int weight = 3;
    float high_note = 0.0f;

    printf ("Write down the student code:\n");
    scanf("%d", &code);
    
    while (i <= SIZE) {
        printf("Write down the note %d\n", i);
        scanf("%f", &note[i]);

        if (note[i] > high_note){
            high_note = note[i];
            high_note_w = high_note * max_weight;
            } else {
            note_w += note[i] * weight;    
            }

        i++;
    }
        calc = (high_note_w + note_w) / (weight + weight + max_weight);

        printf("The weighted average is %.2f", calc);
    return 0;
}