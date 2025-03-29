

/*
Escrever um algoritmo que lê um valor N inteiro e positivo e que calcula e escreve o valor de E:
E = 1 + 1 / 1! + 1 / 2! + 1 / 3! + 1 / N!
*/



#include <stdio.h>


    int main() {
        int N;

        printf("Enter a valid positive number: ");
        if(scanf("%d", &N) != 1) {
            printf("User input is not a valid positive number");
            return 1;
        }
        if (N < 0) {
            printf("User input is not a valid positive numer");
            return 1;
        }

        printf("you've got it right");
        return 0;
    }