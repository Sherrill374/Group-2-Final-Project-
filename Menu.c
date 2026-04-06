#include <stdio.h>
#include "Menu.h"
#include "calculateOne.h"
#include "calculateTwo.h"
#include "writeFile.h"
#include "readFile.h"

// Function: displayMenu
// Purpose: Displays the main menu options to the user
void displayMenu(void) {
    printf("\n===== MAIN MENU =====\n");
    printf("1. Add Two Numbers\n");
    printf("2. Multiply Two Numbers\n");
    printf("3. Write to File\n");
    printf("4. Read from File\n");
    printf("5. Exit\n");
    printf("Enter your choice: ");
}

// Function: getChoice
// Purpose: Gets the user's menu selection and returns it as an integer
int getChoice(void) {
    int choice;
    scanf("%d", &choice); // Read user input
    return choice;        // Return selected option
}

// Function: handleChoice
// Purpose: Processes the user's selection and calls the appropriate function
void handleChoice(int choice) {
    int num1, num2, result;

    // Determine which option the user selected
    switch (choice) {

        // Option 1: Perform first calculation (addition)
        case 1:
            printf("Enter two integers: ");
            scanf("%d %d", &num1, &num2);
            firstCalculation(num1, num2);
            break;

        // Option 2: Perform second calculation (multiplication)
        case 2:
            printf("Enter two integers: ");
            scanf("%d %d", &num1, &num2);
            result = secondCalculation(num1, num2);
            printf("Result: %d\n", result);
            break;

        // Option 3: Write data to a file
        case 3:
            writeToFile("data.txt");
            break;

        // Option 4: Read data from a file
        case 4:
            readFromFile("data.txt");
            break;

        // Option 5: Exit program
        case 5:
            printf("Goodbye!\n");
            break;

        // Handle invalid input
        default:
            printf("Invalid choice\n");
    }
}
