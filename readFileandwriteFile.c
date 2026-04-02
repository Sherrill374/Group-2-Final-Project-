#include <stdio.h>
#include "file_ops.h"

void writeToFile(const char *filename) {
    FILE *file;
    char text[100];

    file = fopen(filename, "w");

    if (file == NULL) {
        printf("Error opening file for writing.\n");
        return;
    }

    printf("Enter text to write to file: ");
    getchar();
    fgets(text, sizeof(text), stdin);

    fprintf(file, "%s", text);
    fclose(file);

    printf("Data written to file successfully.\n");
}

void readFromFile(const char *filename) {
    FILE *file;
    char text[100];

    file = fopen(filename, "r");

    if (file == NULL) {
        printf("Error opening file for reading.\n");
        return;
    }

    printf("\nContents of file:\n");

    while (fgets(text, sizeof(text), file) != NULL) {
        printf("%s", text);
    }

    fclose(file);
}
