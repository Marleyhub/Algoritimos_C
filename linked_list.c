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
// Sets next to pointer to node param at first NULL then head gets the value of new node
// returns pointer to a Node
Node* createRList(Node* head, int i){ 
    Node* newNode = malloc(sizeof(Node));
    newNode->value = i;
    newNode->next = head;
    return newNode;
}

// Alocates a space for a empty(trash value) node
// Sets values
Node* createList(Node* head, int i){
    Node* newNode = malloc(sizeof(Node));
    if(!newNode){
        newNode = NULL;
        return newNode;
    }
    newNode->value = i;
    newNode->next = NULL;

    // If list is empty (head == NULL) then head == newNode
    if(head == NULL){
        head = newNode;
        return newNode;
    }

    // if list is not empty (head != NULL) traverses it until finds tail (next == NULL)
    // Then make this next points to new Node with new next == NULL (tail)
    Node* current = head;
    while(current->next != NULL){
        current = current->next;
    }

    current->next = newNode;
    return head;
}

// Passing the last node created and settig it like current to print
// While dont find next == NULL (tail) print value then changes current to next
void printRList(Node* head){
    Node* currentNode = head;
    while(currentNode->next != NULL){
        printf("%d\n", currentNode->value);
        currentNode = currentNode->next;
    }
}
void printList(Node* head){
    Node* currentNode = head;
    while(currentNode->next != NULL){
        printf("%d\n", currentNode->value);
        currentNode = currentNode->next;
    }
}

// Head should be NULL only to iniciate list
int main() {
    Node* rhead = NULL;
    Node* head = NULL;

    // Every call to createList() modifies head to newNode
    // head will be always the last increment to list
    for (int i = 0; i < SIZE; i++){
        rhead = createRList(rhead, i);
    }

    // Only the first call returns newNode
    // if head already changed (head != NULL) then it only returns the same head
    for (int i = 0; i < SIZE; i++){
        head = createList(head, i);
    }

    printRList(rhead);
    printList(head);
    return 0;
}