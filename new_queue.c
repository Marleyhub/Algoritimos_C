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
        printf("Memory allocation faild");
        return;
    }

    newNode->value = i;
    newNode->next = NULL;

    if(*front == NULL){
        *front = *rear = newNode;
        return;
    }

    (*rear)->next = newNode;
    *rear = newNode;
    return;
}

void dequeue(Node** front, Node** rear){
    if(*front == NULL){
        printf("List is empty");
        return;
    }

    Node* tmp = *front;
    *front = (*front)->next;

    if(*front == NULL){
        printf("All the list have been deleted\n");
        return;
    }

    free(tmp);
    return;
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
    Node* rear =  NULL;

    for (int i = 0; i < SIZE; i++){
        enqueue(&front, &rear, i);
    }   

    for (int i = 0; i < SIZE; i++){
        dequeue(&front, &rear);
    }   

    for (int i = 0; i < 10; i++){
        enqueue(&front, &rear, i);
    }   

    printQueue(front);

    return 0;
}