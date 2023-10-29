#include <stdio.h>
#include <stdlib.h>

int main () {
    char filename [] = "input.txt";
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        perror("");
        return 1;
    }

    int num_array[200];
    char line_buffer[100];

    int count = 0;
    int count2 = 0;
    while (fgets(line_buffer, 100, file) != NULL) {

        if (atoi(line_buffer) > 1000) {
            count2++;
        }

        num_array[count] = atoi(line_buffer);
        printf ("%d\n", num_array[count]);

        count++;
    }

    for (int i = 0; i < count; i++) {
        int desire = 2020 - num_array[i];

        for (int j = 0; j < count; j++) {
            if (num_array[j] == desire) {
                printf ("\nA pair of numbers which adds to 2020 is %d and %d.\n", num_array[i], num_array[j]);
            }
        }
    }
  
    printf ("\nThe count of numbers which are greater than 1000 is %d.\n", count2);

    fclose(file);
    return 0;
}