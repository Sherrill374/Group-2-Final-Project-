#include <stdio.h>
#include "menu.h"
#include "mainLoop.h"

//Main function integrates all modules

int main() {
    int option;

    do {
        option = menu();          // show menu
        mainLoop(option);         // send to selector
    } while (option != 5);        // exit option

    return 0;
}
