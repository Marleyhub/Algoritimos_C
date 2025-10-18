#include<stdio.h>
#include<stdlib.h>

#define SIZE 30
void shellSort(int* vet){
    int i, j, value;

    int h = 1;
    while(h < SIZE){
        h = h*3 + 1;
        /*
            At this point we define the gap (h) based into a matematic model,
            that increases the gap value until it hits one interation aboVe SIZE
            here it could be another matevatic model like logaritimc or simple dived the SIZE BY 2
        */
    }
    while(h > 0){
        for(i = h; i < SIZE; i++){
            value = vet[i];
            j = i;
        /*
            When h less or equals 0, the vetor is sorted.
            "i" must equals "h" bc so whe can use it as index for the left int to be compared,
            passing it vet[i] to value.
            "j" equals "i" bc the next loop needs the gap SIZE (seted int "i = h") to make calculations into the other
            element to be compared.
        */ 
       }
    }
}

int main(){
    int* vet[SIZE];
    return 0;
}