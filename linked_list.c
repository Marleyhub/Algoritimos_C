#include <stdio.h>
#include <stdlib.h>

#define SIZE 30

typedef struct node
{
    int value;
    struct node *next;
} node;

int main(){
    node *list = NULL;

    for (int i = 0; i < SIZE; i++){
        node *n = malloc(sizeof(node));

        if(n == NULL){
            return 1;
        }

        n->value = i + 1;
        n->next = NULL;

        if(list == NULL){
            list = n;

        } else {
            for(node *ptr = list; ptr != NULL; ptr = ptr->next){
                if (ptr->next == NULL){
                    ptr->next = n;
                    break;
                }
            }
        }
    }

    node *ptr = list;
    while(ptr->next != NULL){
        printf("%d\n", ptr->value);
        ptr = ptr->next;
    }
}