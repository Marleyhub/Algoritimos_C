#include <stdio.h>
#include <stdlib.h>

#define SIZE 30

// always create the node struct outside any func
// next should be always a pointer to struct type Node
typedef struct Node{
    int value;
    struct Node* next;
}Node;


// Passing front and rear by reference so its acts the variable at main()
// If front is null the list is empty so front and rear are equals the new firs node.
// If not empty go to rear and adds newNode memory adress to next
void enqueue(Node** front, Node** rear, int i){
    Node* newNode = malloc(sizeof(Node));

    if(!newNode){
        printf("Memory allocation faild");
        return;
    }
    newNode->value = i;
    newNode->next = NULL;
    
    if(*front == NULL){
        *front = newNode;
        *rear = newNode;
        return;
    }
    
    (*rear)->next = newNode;
    *rear = newNode;
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
    Node* rear = NULL;

    for(int i = 0; i < SIZE; i++){
        enqueue(&front, &rear, i);
    }

    printQueue(front);
    return 0;
}