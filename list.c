#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

int main(void) {
    int i;

    // Creating first small list
    int *list = malloc(SIZE * sizeof(int));
    if(list == NULL){
        return 1;
    }
    for(i = 0; i < SIZE; i++){
        list[i] = i + 2;
    }

    // printing list
    printf("_______Primeira lista_______:\n");
    for(i = 0; i < SIZE; i++){
        printf("%d\n", list[i]);
    }

    // creating bigger temporary list 
    int newSize = SIZE * 2; 
    int *tmp = malloc(newSize * sizeof(int));
    if (tmp == NULL){
        free(list);
        return 1;
    }

    // feeding temp list with small list data
    for (i = 0; i < SIZE; i++){
       tmp[i] = list[i];
    }

    // freeing useless data
    free(list);

    // feeding the rest of empty spaces os bigger temp list
    for (i = SIZE; i < newSize; i++) {
        tmp[i] = i + 2;
    }

    // small list pointer now pointing do big list space on memory
    list = tmp; 

    // printing new bigger list
    printf("________Segunda lista lista: _______ \n");
    for(i = 0; i < newSize; i++){
        printf("%d\n", list[i]);
    }
}