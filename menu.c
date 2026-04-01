#include <stdio.h>
#include "menu.h"

int menu() {
    int choice;

    printf("\n--- MENU ---\n");
    printf("1. Calculation 1\n");
    printf("2. Calculation 2\n");
    printf("3. Write to File\n");
    printf("4. Read File\n");
    printf("5. Exit\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    return choice;
}
