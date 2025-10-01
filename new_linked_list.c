#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

typedef struct Node{
    int value;
    struct Node* next;
}Node;

Node* createRlist(Node* head, int i){
    Node* newNode = malloc(sizeof(Node));
    if(newNode == NULL){
        return NULL;
    }
    newNode->value = i;
    newNode->next = head;
    return newNode;
}



Node* createList(Node* head, int i){
    Node* newNode = malloc(sizeof(Node));

    if(!newNode){
        return NULL;
    }

    newNode->value = i;
    newNode->next = NULL;

    if(head == NULL){
        return newNode;
    }

    Node* current = head;
    while(current->next != NULL){
        current = current->next;
    }
    
    current->next = newNode;
    return head;
}

void printRList(Node* head){
    Node* current = head;
    while(current->next != NULL){
        printf("%d\n", current->value);
        current = current->next;
    }
}

void printList(Node* head){
    Node* current = head;
    while(current->next != NULL){
        printf("%d\n", current->value);
        current = current->next;
    }
}

int main() {
    Node* rHead = NULL;
    Node* head = NULL;

    for (int i = 0; i < SIZE; i++){
        rHead = createRlist(rHead, i);
    }

    for (int i = 0; i < SIZE; i++){
        head = createList(head, i);
    }

    printRList(rHead);
    printList(head);

    return 0;
}