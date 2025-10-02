#include <stdio.h>
#include <stdlib.h>

#define SIZE 30

typedef struct Node{
    int value;
    struct Node* next;
}Node;


void stack(Node** top, Node** botton, int i){
    Node* newNode = malloc(sizeof(Node));

    if(!newNode){
        printf("Memory allocation faild");
        return;
    }

    newNode->value = i;
    newNode->next = *top;

    if(*top == NULL){
        *top = *botton = newNode;
        return;
    }

    *top = newNode;
    return;
}

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

    printStack(top);
}