/*
10. Escreva um algoritmo que leia o código de um aluno e suas três notas. Calcule a média ponderada do aluno, considerando que o peso para a maior nota seja 4 e para as
duas restantes, 3. Mostre o código do aluno, suas três notas, a média calculada e uma mensagem "APROVADO" se a média for maior ou igual a 5 e "REPROVADO" se a
média for menor que 5. Repita a operação até que o código lido seja negativo.
*/

#include <stdio.h>
#define SIZE 3

int main(){

    int code, i;
    float note[SIZE];
    float calc, high_note_w, note_w, high_note;
    int max_weight = 4;
    int weight = 3;


    while(1){
        printf ("Write down the student code (negative to exit):\n");
        scanf("%d", &code);
        
        if(code < 0)
        break;

        high_note = 0;
        high_note_w = 0;
        note_w = 0;
        calc = 0;
        i = 0;

        while (i < SIZE) {
            printf("Write down the note %d\n", i + 1);
            scanf("%f", &note[i]);
    
            if (note[i] > high_note)
                high_note = note[i];
            i++;
            }

            for (i = 0; i < SIZE; i++) {
                if (note[i] == high_note) {
                    high_note_w = note[i] * max_weight;
                } else {
                    note_w += note[i] * weight;
                }
            }

            calc = (high_note_w + note_w) / (weight + weight + max_weight);
    
            printf("The weighted average is for the student code:%d is %.2f\n", code, calc);
    
            if (calc < 5)
            printf ("STATUS: REPPROVED\n");
            else
            printf("STATUS: APPROVED\n");
       
    }
    return 0;
}