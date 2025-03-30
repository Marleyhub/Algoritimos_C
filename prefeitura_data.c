
/*

A prefeitura de uma cidade fez uma pesquisa entre seus habitantes, coletando dados sobre o salário e número de filhos. A prefeitura deseja saber:
    a) média do salário da população;
    b) média do número de filhos;
    c) maior salário;
    d) percentual de pessoas com salário até R$100,00 

*/


#include <stdio.h>

int main () {
    float salario [15];
    int filhos [15];
    float maiorSalario = 0;
    int ate100 = 0;
    int salario_length = sizeof salario / sizeof salario[0];

    printf("write down 15 salaries: ");
    for (int i = 0; i < salario_length; i++) {
        printf("Salarie %d: ", i + 1);
        scanf("%f", &salario[i]);

        if (salario[i] > maiorSalario){
            maiorSalario = salario[i];
        }
    }
    
    for (int j = 0; j < salario_length; j++) {
        printf("Salarie -- R$:%.2f\n", salario[j]);
    }

    printf ("Maior salario: %.2f", maiorSalario);

    return 0; 
}