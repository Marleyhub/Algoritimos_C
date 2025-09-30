#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

// always create the node struct outside any func
// next should be always a pointer to struct type Node
typedef struct Node{
    int value;
    struct Node* next;
}Node;

int createList(){
    int* list = malloc(SIZE * sizeof(int)); 
    Node* node = malloc(sizeof(Node));
    printf("%d",list[0]);
    for(int i = 0; i < SIZE; i++){
        node->value = i;
        node->next = NULL;
    }
}


int mais() {
    creteList();
    return 0;
}