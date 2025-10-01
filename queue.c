#include <stdio.h>
#include <stdlib.h>

#define SIZE 30

typedef struct Node{
    int value;
    struct Node* next;
}Node;


void enqueue(Node** front, Node** rear, int i){
    Node* newNode = malloc(sizeof(Node));

    if(!newNode){
        printf("Memory allocation failed\n");
        return;
    }

    newNode->value = i;
    newNode->next = NULL;

    if(*rear == NULL){
        *front = *rear = newNode;
    } else {
        (*rear)->next = newNode;
        *rear = newNode;
    }

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

    for (int i = 0; i < SIZE; i++){
           enqueue(&front, &rear, i);
    } 
    printQueue(front);

    return 0;
}