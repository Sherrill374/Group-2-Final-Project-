#include <stdio.h>
#include "menu.h"

int main() {
    int choice;

    do {
        displayMenu();
        choice = getChoice();
        handleChoice(choice);
    } while (choice != 5);

    printf("Exiting program...\n");
    return 0;
}

