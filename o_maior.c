
/*

4. Chico tem 1,50 metro e cresce 2 centímetros por ano, enquanto Zé tem 1,10 metro e cresce 3 centímetros por ano. Construa um algoritmo que calcule e imprima quantos
anos serão necessários para que Zé seja maior que Chico.

*/

#include <stdio.h>

int main () {

    float chico_heigth = 1.50f;
    float ze_heigth = 1.10f;

    int year = 0;

    while (chico_heigth > ze_heigth) {
            year++;
            chico_heigth += 0.02;
            ze_heigth += 0.03;
    }
    printf("there will be needed %d yers to ze be higher then chico", year);
    return 0;
}