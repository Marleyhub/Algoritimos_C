
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
    int maiorSalario = 0;
    int ate100 = 0;
    int salario_length = sizeof salario / sizeof salario[0];

    printf("Digite até no maximo 15 numeros inteiros que representem salários: /n");
    for (int i = 0; i < salario_length; i++) {
        scanf("%f", &salario);
    }
    printf("%f", salario);
    return 0; 
}