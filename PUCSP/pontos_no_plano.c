/*
1. Construa um algoritmo que, tendo como dados de entrada dois pontos quaisquer no plano,P(x1,y1) e P(x2,y2),
escreva a distância entre eles. A fórmula que efetua tal cálculo é:
*/ 

#include <stdio.h>
#include <string.h>
#include <math.h>


float math_func(float x1, float y1, float x2, float y2) {

    float distance;
    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    return distance;
}

int main(){
    typedef struct 
    {
       float x, y;
    } Ponto;
    
    Ponto p1;
    Ponto p2;

    p1.x = 5.99;
    p1.y = 400.46;

    p2.x = 34.75;
    p2.y = 18.98;

    float d;

    d = math_func(p1.x, p1.y, p2.x, p2.y);

    printf("The distance between the points is: %f", d);

    return 0;
}

