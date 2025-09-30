#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

// always create the node struct outside any func
// next should be always a pointer to struct type Node
typedef struct Node{
    int value;
    struct Node* next; 
}Node;

// Alocates a space for a empty(trash value) node
// Sets values
// Sets next like pointer to node param at first NULL 
// returns pointer to a Node
Node* createRList(Node* head, int i){ 
    Node* newNode = malloc(sizeof(Node));
    newNode->value = i;
    newNode->next = head;
    return newNode;
}

Node* createList(Node* head, int i){ 
    Node* newNode = malloc(sizeof(Node));
    newNode->value = i;
    newNode->next = head;
    return newNode;
}

// Passing the last node created and settig it like current to print
// While dont find next == NULL (tail) print value then changes current to next
void printList(Node* node){
    Node* currentNode = node;
    while(node->next != NULL){
        printf("%d\n", currentNode->value);
        currentNode = currentNode->next;
    }
}

// Head should be NULL only to iniciate list
// Every call to createList() returns newNode to head
int main() {
    Node* head = NULL;

    for (int i = 0; i < SIZE; i++){
        head = createRList(head, i);
    }

    printList(head);
    return 0;
}