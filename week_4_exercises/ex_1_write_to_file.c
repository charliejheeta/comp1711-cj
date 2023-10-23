// Question 1
// Write a programme that creates the file squares.dat and writes to it the squares of the positive integers from 1 to n, where n is provided as input by the user.

#include <stdio.h>

int main () {

    int choice;
    printf ("Enter n: ");
    scanf ("%d", &choice);

    char filename[] = "squares.txt";
    FILE *file = fopen(filename, "w");
    if (file == NULL) {
        perror("");
        return 1;
    }

    int i = 1;
    while (i <= choice) {
        fprintf (file, "%d\n", i*i);
        i++;
    }

    fclose(file);
    return 0;

}