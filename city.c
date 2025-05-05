/*
23. Foi realizada uma pesquisa de algumas características físicas da população de uma certa região, a qual coletou os seguintes dados referentes a cada habitante para
serem analisados:
- sexo (masculino e feminino)
- cor dos olhos (azuis, verdes ou castanhos)
- cor dos cabelos ( louros, castanhos, pretos)
- idade
24. Faça um algoritmo que determine e escreva:
- a maior idade dos habitantes
- a quantidade de indivíduos do sexo feminino cuja idade está entre 18 e 35 anos inclusive e que tenham olhos verdes e cabelos louros.

O final do conjunto de habitantes é reconhecido pelo valor -1 entrada como idade.
*/

#include <stdio.h>

int main() {
    int idade, maior_idade = 0, contador_feminino = 0;
    char sexo, olhos, cabelos;

    printf("Write down the information about the person and  idade= -1 to exit\n");

    while (1) {
        printf("\nIdade: ");
        scanf("%d", &idade);

        if (idade == -1) {
            break;
        }

        printf("Sexo (M/F): ");
        scanf(" %c", &sexo);

        printf("Cor dos olhos (A - azuis, V - verdes, C - castanhos): ");
        scanf(" %c", &olhos);

        printf("Cor dos cabelos (L - louros, C - castanhos, P - pretos): ");
        scanf(" %c", &cabelos);

        if (idade > maior_idade) {
            maior_idade = idade;
        }

        if (sexo == 'F' || sexo == 'f') {
            if (idade >= 18 && idade <= 35 && (olhos == 'V' || olhos == 'v') && (cabelos == 'L' || cabelos == 'l')) {
                contador_feminino++;
            }
        }
    }

    printf("\nMaior idade dos habitantes: %d\n", maior_idade);
    printf("Quantidade de mulheres entre 18 e 35 anos com olhos verdes e cabelos louros: %d\n", contador_feminino);

    return 0;
}