#include "menu.h"
#include "mainLoop.h"

// Main function integrates all modules
int main() {
    int option;

    option = menu();        // get user selection
    mainLoop(option);       // process selection

    return 0;
}
