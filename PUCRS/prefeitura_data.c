
/*

A prefeitura de uma cidade fez uma pesquisa entre seus habitantes, coletando dados sobre o salário e número de filhos. A prefeitura deseja saber:
    a) média do salário da população;
    b) média do número de filhos;
    c) maior salário;
    d) percentual de pessoas com salário até R$100,00 

*/

#include <stdio.h>

#define SIZE 15

int main () {
    float salario [SIZE];
    float maiorSalario = 0.0f;
    int ate100 = 0;
    float salario_total = 0.0f;
    
    int filhos [SIZE];
    float filhos_total = 0.0f;
    
 // Input Salaries
    printf("write down 15 salaries: ");
    for (int i = 0; i < SIZE; i++) {
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

// Input Suns Number
    printf("Write down how many sons per family: \n");
    for (int j = 0; j < SIZE; j++) {
        printf("Family-%d: ", j + 1);
        scanf("%d", &filhos[j]);

        filhos_total += filhos[j];
    }
   
// Calculations
    float ate100_percent = (ate100 * 100) / SIZE;
    float salario_med = salario_total / SIZE;
    float filhos_med = filhos_total / SIZE;

// Output Results
    printf("\n--- Results ---\n");
    printf("The percentual of salaries that are under or equal R$100,00 is %.2f percent\n", ate100_percent);
    printf("The media of all salaries are: R$%.2f \n", salario_med);
    printf("The highest salarie is R$%.2f \n", maiorSalario);
    printf("The media of suns per family is %.2f\n", filhos_med);

    return 0; 
}