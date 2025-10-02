#include <stdio.h>
#include <stdlib.h>

#define SIZE 30

// always create the node struct outside any func
// next should be always a pointer to struct type Node
typedef struct Node{
    int value;
    struct Node* next;
}Node;

// passing values by reference
void stack(Node** top, Node** botton, int i){
    Node* newNode = malloc(sizeof(Node));

    if(!newNode){
        printf("Memory allocation faild");
        return;
    }
    /*
        newNode->next is equals top because at firts it must be null,
        and after it is the previous top passed by parameter like linked list
    */ 
    newNode->value = i;
    newNode->next = *top;

    // If top equals NULL stack is empty so top and botton equals newNode
    if(*top == NULL){
        *top = *botton = newNode;
        return;
    }

    // If stack is not empty changes top to new node
    *top = newNode;
    return;
}

// passing pointers by reference
// if top equals NULL at first list is empty return
void deStack(Node** top, Node** botton){
    if(*top == NULL){
        printf("List is empty");
        return;
    }

    // If stack is not empty pass actual top to tmp variable to further delete it
    // top now will be one bellow or (*top)->next
    Node* tmp = *top;
    *top = (*top)->next;

    // if top equals null after the process the stack have been deleted
    if(*top == NULL){
        printf("Stack have been deleted\n");
        return;
    }

    free(tmp);
    return;
}

// Traverses queue and print each one until current be NULL
void printStack(Node* top){
    Node* current = top;
    while(current->next != NULL){
        printf("%d\n", current->value);
        current = current->next;
    }
}

int main(){
    Node* top = NULL;
    Node* botton = NULL;

    for(int i = 0; i < SIZE; i++){
        stack(&top, &botton, i);
    }

    for(int i = 0; i < SIZE; i++){
        deStack(&top, &botton);
    }

    for(int i = 0; i < 5; i++){
        stack(&top, &botton, i);
    }


    printStack(top);
}