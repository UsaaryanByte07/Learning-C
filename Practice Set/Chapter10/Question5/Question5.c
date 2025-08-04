#include <stdio.h>

int main() {
    /* 5. Write a program to modify a file containing an integers to double its value. */

    FILE *in = fopen("Question5.txt", "r");
    if (in == NULL) {
        printf("Error Occurred while opening file for reading!!");
        return 1;
    }

    int numbers[1000];  // Assuming max 1000 numbers
    int count = 0;

    // Read integers from file
    while (fscanf(in, "%d", &numbers[count]) == 1) {
        count++;
    }

    fclose(in);  // Close after reading

    // Square each number
    for (int i = 0; i < count; i++) {
        numbers[i] = numbers[i] * numbers[i];
    }

    // Reopen file in write mode to overwrite it
    FILE *out = fopen("Question5.txt", "w");
    if (out == NULL) {
        printf("Error Occurred while opening file for writing!!");
        return 1;
    }

    for (int i = 0; i < count; i++) {
        fprintf(out, "%d ", numbers[i]);
    }

    fclose(out);
    return 0;
}
