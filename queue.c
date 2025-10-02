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
    /*
        If only "front" your are toutching this "Node** front" reference,
        with "*front" you get the (Node* front) in main
    */ 
    if(*front == NULL){
        *front = newNode;
        *rear = newNode;
        return;
    }
    /*
        The "()" is here for priority order it says: 
        - first dereference "*rear" tha goes to main() and finds "Node* rear".
        Then after it find the next property of what you found as rear 
    */ 
    (*rear)->next = newNode;
    *rear = newNode;
    return;
}

void dequeue(Node** front){
    if(*front == NULL){
        printf("Empty queue!");
        return;
    }

    *front = (*front)->next;
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
        // passing pointers by reference.
        enqueue(&front, &rear, i);
    }
    
    for(int i = 0; i < 10; i++){
        dequeue(&front);
    }

    for(int i = 0; i < 5; i++){
        // passing pointers by reference.
        enqueue(&front, &rear, i);
    }

    printQueue(front);
    return 0;
}