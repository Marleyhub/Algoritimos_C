#include <stdio.h>
#include <stdlib.h>

#define SIZE 30

typedef struct Node{
    int value;
    struct Node* next;
}Node;

// why i need to pass "**" and in the linked list i dont
void enqueue(Node** front, Node** rear, int i){
    Node* newNode = malloc(sizeof(Node));

    if(!newNode){
        printf("Memory allocation failed\n");
        return;
    }

    newNode->value = i;
    newNode->next = NULL;

    // dont understand why the "*" before pointer
    if(*rear == NULL){
        *front = *rear = newNode;
    } else {
        // ok i know i need "()" to call insede value but what is it really doing?
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
           // Passing the adress of this pointers but i dont get the logic
           enqueue(&front, &rear, i);
    } 
    printQueue(front);

    return 0;
}