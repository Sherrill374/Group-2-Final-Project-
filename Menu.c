#include <stdio.h>
#include "Menu.h"
#include "calculateOne.h"
#include "calculateTwo.h"
#include "writeFile.h"
#include "readFile.h"

void displayMenu(void) {
    printf("\n===== MAIN MENU =====\n");
    printf("1. Add Two Numbers\n");
    printf("2. Multiply Two Numbers\n");
    printf("3. Write to File\n");
    printf("4. Read from File\n");
    printf("5. Exit\n");
    printf("Enter your choice: ");
}

int getChoice(void) {
    int choice;
    scanf("%d", &choice);
    return choice;
}

void handleChoice(int choice) {
    int num1, num2, result;

    switch (choice) {
        case 1:
            printf("Enter two integers: ");
            scanf("%d %d", &num1, &num2);
            firstCalculation(num1, num2);
            break;

        case 2:
            printf("Enter two integers: ");
            scanf("%d %d", &num1, &num2);
            result = secondCalculation(num1, num2);
            printf("Result: %d\n", result);
            break;

        case 3:
            writeToFile("data.txt");
            break;

        case 4:
            readFromFile("data.txt");
            break;

        case 5:
            printf("Goodbye!\n");
            break;

        default:
            printf("Invalid choice\n");
    }
}
