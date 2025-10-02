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

// Still passing by reference
// If list is empty stop 
// If not pass actual front to temporary variable to further deleted
// Sets new front to next at queue
// delete temp to avoid memory leaks
void dequeue(Node** front, Node** rear){

    if(*front == NULL){
        printf("Empty queue!");
        return;
    }
    Node* tmp = *front;
    *front = (*front)->next;

    if(*front == NULL){
        *rear == NULL;
        printf("Queue have been deleted\n");
        return;
    }
    free(tmp);
    return;
}
// Traverses queue and print each one until current be NULL
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
    
    // deleting all list
    for(int i = 0; i < SIZE; i++){
        dequeue(&front, &rear);
    }
    
    // andding new list
    for(int i = 0; i < 5; i++){
        // passing pointers by reference.
        enqueue(&front, &rear, i);
    }

    printQueue(front);
    return 0;
}