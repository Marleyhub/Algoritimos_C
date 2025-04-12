


/*
Escreva um algoritmo que calcule a média aritmética das 3 notas dos alunos de uma classe. O algoritmo deverá ler, além das notas, o código do aluno e deverá ser
encerrado quando o código for igual a zero.
*/
#include <stdio.h>

int main() {
    int codigo;
    float nota1, nota2, nota3, media;

    while (1) {
        printf("Write the studant code (0 to exit): ");
        scanf("%d", &codigo);

        if (codigo == 0) {
            printf("Finishing.\n");
            break;
        }

        printf("Write down 3 notes for the studant:\n");
        printf("Note 1: ");
        scanf("%f", &nota1);
        printf("Note 2: ");
        scanf("%f", &nota2);
        printf("Note 3: ");
        scanf("%f", &nota3);

        media = (nota1 + nota2 + nota3) / 3.0;

        printf("studant code: %d\n", codigo);
        printf("Media: %.2f\n\n", media);
    }

    return 0;
}