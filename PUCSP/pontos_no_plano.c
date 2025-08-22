/*
1. Construa um algoritmo que, tendo como dados de entrada dois pontos quaisquer no plano,P(x1,y1) e P(x2,y2),
escreva a distância entre eles. A fórmula que efetua tal cálculo é:
*/ 

#include <stdio.h>
#include <string.h>

int main(){
    typedef struct 
    {
       float x, y;
    } Ponto;
    
    Ponto p1;
    Ponto p2;

    p1.x = 10;
    p1.y = 20.1;

    p2.x = 23;
    p2.y = 1;

    printf("p1 = (%f, %f)\n", p1.x, p1.y);
    printf("p1 = (%f, %f)", p2.x, p2.y);
    
    return 0;
}