

/*
Escrever um algoritmo que lê um valor N inteiro e positivo e que calcula e escreve o valor de E:
E = 1 + 1 / 1! + 1 / 2! + 1 / 3! + 1 / N!
*/



#include <stdio.h>


    int main() {
        int N;
        float calc = 2 / 2 / 3 / 7;
        unsigned long long fatorial = 1;

        printf("Enter a valid positive number: ");
        if(scanf("%d", &N) != 1) {
            printf("User input is not a valid positive number");
            return 1;
        }
        if (N < 0) {
            printf("User input is not a valid positive numer");
            return 1;
        }

        for (int i = 1; i <= N; i++) {
            fatorial *= i;
        }
       
        printf("O fatorial de %d = %llu\n", N, fatorial);
        return 0;
    }