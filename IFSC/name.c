/*
9. Faça um algoritmo que:
a) Leia o nome;
b) Leia o sobrenome;
c) Concatene o nome com o sobrenome;
d) Apresente o nome completo.
*/
#include <stdio.h>
#include <string.h>

int main() {
    char firstName[50], lastName[50], fullName[100];

    // Read first name
    printf("Enter your first name: ");
    scanf("%s", firstName);

    // Read last name
    printf("Enter your last name: ");
    scanf("%s", lastName);

    // Concatenate first name and last name into fullName
    strcpy(fullName, firstName);     // Copy first name into fullName
    strcat(fullName, " ");           // Add a space between them
    strcat(fullName, lastName);      // Add last name

    // Print the full name
    printf("Your full name is: %s\n", fullName);

    return 0;
}