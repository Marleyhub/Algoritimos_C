
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
    float ate100_percent = 0;
    float salario_length = sizeof salario / sizeof salario[0];
    float salario_total = 0;
    float salario_med = 0;

    printf("write down 15 salaries: ");
    
    for (int i = 0; i < salario_length; i++) {
        printf("Salarie %d: ", i + 1);
        scanf("%f", &salario[i]);

        if (salario[i] > maiorSalario){
            maiorSalario = salario[i];
        }

        if(salario[i] <= 100) {
            ate100++;
        }

        salario_total += salario[i];
    }

    for (int j = 0; j < salario_length; j++) {
        printf("Salarie -- R$:%.2f\n", salario[j]);
    }

    ate100_percent = (ate100 * 100) / salario_length;
    salario_med = salario_total / salario_length;

    printf("The percentual of salaries that are under or equal R$100,00 is %.2f percent\n", ate100_percent);
    printf("The media of all salaries are: R$%.2f \n", salario_med);
    printf("The highest salarie is R$%.2f \n", maiorSalario);

    return 0; 
}