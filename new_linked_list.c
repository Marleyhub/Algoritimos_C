#include <stdio.h>
#include <stdlib.h>

#define SIZE 30
typedef struct Node{
    int value;
    struct Node* next;
}Node;

Node* createRList(Node* head, int i){
    Node* newNode = malloc(sizeof(Node));

    if(!newNode){
        return NULL;
    }
    newNode->value = i;
    newNode->next = head;
    return newNode;
}

void printRlist(Node* head){
    Node* current = head;
    while(current->next != NULL){
        printf("%d\n", current->value);
        current = current->next;
    }
}

int main (){
    Node* rHead = NULL;

    for (int i = 0; i < SIZE; i++){
        rHead = createRList(rHead, i);
    }

    printRlist(rHead);
    return 0;
}