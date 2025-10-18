#include<stdio.h>
#include<stdlib.h>

#define SIZE 30
void shellSort(int* vet){
    int i, j, value;

    int h = 1;
    while(h < SIZE){
        h = h*3 + 1;
        /*
            - At this point we define the gap (h) based into a matematic model,
            that increases the gap value until it hits one interation above SIZE
            here it could be another matematic model like logaritimc or simple dived the SIZE BY 2
        */
    }
    while(h > 0){
        for(i = h; i < SIZE; i++){
            value = vet[i];
            j = i;
        /*
            - When h less or equals 0, the vetor is sorted.
            - "i" must equals "h" bc so whe can use it as index for the left int to be compared,
            passing it vet[i] to value.
            - "j" equals "i" bc the next loop needs the gap SIZE (seted int "i = h") to make calculations into the other
            element to be compared.
            - At eacj itearatin "i" will be encreased but the gap "h" is the same, the comparetion goes rigth by 1 index using the same
            gap
        */ 
       }
       while(j >= h && value <= vet[j - h]){
        /*
            - "j" is needed to be the index of the left int.
            - First we make sure that j is a valid positive int, so
            whe can use it to finde the left int into the vetor to compare
            - Make the left int of the sublist be "h" positions before vet[i] (rigth int of sublist)
            - So this "j = j - h;" finaly grants the break into the loop so "vet[j] = value" grants that the 
            rigth int assumes the old value of the already changed left int;
       */
            vet[j] = vet[j - h];
            j = j - h; 
       }
        vet[j] = value;
    }
    // this takes the gap one int minor of SIZE INTO the matematical sequence, so the intaration " for(i = h; i < SIZE; i++) is valid" 
    h = h/3;
}

int main(){
    int* vet[SIZE];
    return 0;
}