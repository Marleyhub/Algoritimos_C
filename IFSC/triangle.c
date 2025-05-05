/*
8. Faça um algoritmo que calcule a área de um triângulo, considerando a fórmula
AREA = (BASE * ALTURA)/2
􀬶 . Utilize as variáveis AREA, BASE e ALTURA e os
operadores aritméticos de multiplicação e divisão.
*/

#include <stdio.h>

int main (){
    float area = 0, base = 0, height = 0;

    while(1){
        printf("Write down a base and a higth for your triangle (-1 o exit)\n");

        //Reads base
        printf("First, the base:\n");
        scanf("%f", &base);

        //if -1 break
        if(base == -1)
        break;

        //reads hight
        printf("Second, the hight:\n");
        scanf("%f", &height);

         //if -1 break
        if(base == -1)
            break;

        // calculates area
        area = (base * height)/2;
    
        printf("The area of this triangle is: %.4f\n\n", area);
    }
    return 0;
}