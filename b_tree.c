/*  
This file consistes in my attempt to write a binary tree.
*/

#include <stdio.h>
#include <stdlib.h>


//Node
struct Node{
    int key;
    struct node *left;
    struct node *rigth; 
};

struct Node* createNode(int item) {
    struct Node *tmp = (struct Node*)malloc(sizeof(struct Node));
    tmp -> key = item;
    tmp -> rigth =  NULL;
    tmp -> left = NULL; // change positions later

    return tmp;
}