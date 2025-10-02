#include <stdio.h>
#include <stdlib.h>

#define SIZE 30

// always create the node struct outside any func
// next should be always a pointer to struct type Node
typedef struct Node{
    int value;
    struct Node* next;
}Node;

Node* enqueue(Node** front, Node* rear, int i){
    Node* newNode = malloc(sizeof(Node));

    if(!newNode){
        printf("Memory allocation faild");
        return NULL;
    }

    newNode->value = i;
    newNode->next = NULL;

    if(*front == NULL){
        *front = newNode;
        rear = *front;
        return rear;
    }

    rear->next = newNode;
    return newNode;
}

void printQueue(Node* front){
    Node* current = front;
    while(current != NULL){
        printf("%d\n", current->value);
        current = current->next;
    }
}

int main(){

    Node* front = NULL;
    Node* rear = NULL;

    for(int i = 0; i < SIZE; i++){
        rear = enqueue(&front, rear, i);
    }

    printQueue(front);
    return 0;
}