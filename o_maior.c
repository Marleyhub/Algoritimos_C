
/*

4. Chico tem 1,50 metro e cresce 2 centímetros por ano, enquanto Zé tem 1,10 metro e cresce 3 centímetros por ano. Construa um algoritmo que calcule e imprima quantos
anos serão necessários para que Zé seja maior que Chico.

*/

#include <stdio.h>

int main () {

    float chico_height = 1.50f;
    float ze_height = 1.10f;
    int year = 0;

    while (chico_height > ze_height) {
            chico_height += 0.02f;
            ze_height += 0.03f;
            year++;
    }
    printf("there will be needed %d years to ze be higher then chico", year);
    return 0;
}