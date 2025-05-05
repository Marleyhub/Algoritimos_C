/*
11. Faça um algoritmo que:
a) Obtenha o valor para a variável HT (horas trabalhadas no mês);
b) Obtenha o valor para a variável VH (valor hora trabalhada):
c) Obtenha o valor para a variável PD (percentual de desconto);
d) Calcule o salário bruto => SB = HT * VH;
e) Calcule o total de desconto => TD = (PD/100)*SB;
f) Calcule o salário líquido => SL = SB – TD;
g) Apresente os valores de: Horas trabalhadas, Salário Bruto, Desconto, Salário
Liquido.
*/

#include <stdio.h>

int main(){

    float HT, VH, PD, SB, TD, SL;

    printf("No formulario a seguir escreva as informacoes sobre o seu trabalho\n");

    printf("Horas trabalhadas no mes: ");
    scanf("%f", &HT);

    printf("Valor das horas trabalhadas: ");
    scanf("%f", &VH);

    printf("Percentual de desconto: ");
    scanf("%f", &PD);

    SB = HT * VH;
    TD = (PD/100)*SB;
    SL = SB - TD;

    printf("Salario Bruto: R$:%.2f\n", SB);
    printf("Desconto: R$:%.2f\n", TD); 
    printf("Salario Líquido: R$:%.2f\n", SL);
    printf("Horas trabalhadas: %.2f\n", HT);

    return 0;
}