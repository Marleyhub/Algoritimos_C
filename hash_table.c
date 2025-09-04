/*
20. Um vendedor necessita de um algoritmo que calcule o preço total devido por um cliente.
Oalgoritmo deve receber o código de um produto e a quantidade comprada e calcular o preço total,

A tabela de preços deve ser implementada pelo usuário com quantos itens o mesmo quiser.
*/ 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TABLE_SIZE 10

typedef struct Entry {
    char *key;
    char *value;
    struct Entry *next; // linked list for collisions
} Entry;

Entry* hashTable[TABLE_SIZE];

// Hash function (djb2 style simplified)
unsigned int hash(const char *key) {
    unsigned int hash = 0;
    while (*key) {
        hash = (hash * 31) + *key;
        key++;
    }
    return hash % TABLE_SIZE;
}

// Insert key-value pair
void insert(const char *key, const char *value) {
    unsigned int index = hash(key);

    Entry *newEntry = malloc(sizeof(Entry));
    newEntry->key = strdup(key);
    newEntry->value = strdup(value);
    newEntry->next = NULL;

    if (hashTable[index] == NULL) {
        hashTable[index] = newEntry;
    } else {
        // Collision: add at beginning of list
        newEntry->next = hashTable[index];
        hashTable[index] = newEntry;
    }
}

// Get value by key
char* get(const char *key) {
    unsigned int index = hash(key);
    Entry *current = hashTable[index];

    while (current != NULL) {
        if (strcmp(current->key, key) == 0) {
            return current->value;
        }
        current = current->next;
    }
    return NULL;
}

// Print hash table (for debugging)
void printTable() {
    for (int i = 0; i < TABLE_SIZE; i++) {
        printf("[%d]: ", i);
        Entry *current = hashTable[i];
        while (current != NULL) {
            printf("(%s → %s) ", current->key, current->value);
            current = current->next;
        }
        printf("\n");
    }
}

int main() {
    insert("name", "Alice");
    insert("city", "Paris");
    insert("language", "C");
    insert("food", "Pizza");

    printf("Name: %s\n", get("name"));
    printf("City: %s\n", get("city"));
    printf("Food: %s\n", get("food"));
    printf("Unknown: %s\n", get("unknown"));

    printf("\nFull Table:\n");
    printTable();

    return 0;
}
