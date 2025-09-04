#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

typedef struct node {
    int number;
    struct node *next;
} node;

// creating pointer to a node list with no(NULL) value declared
node *list = NULL;

int main (void) {
    
    for (int i = 0; i < SIZE; i++) {
        // Getting enough space in memory for one node variable
        node *n = malloc(sizeof(node));

        n->number = i;  // setting number atribute(int) equals i
        n->next = list; // setting next atribute(ptr*) to point to ta same memory space as *list

        list = n; // setting list to poits to this instance of node "n" so in the next loop the atribute *next will point to previus node
    }
    
        printf("%d", list->number);
}