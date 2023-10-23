#include <stdio.h>

int main () {
    char filename [] = "data.txt";
    FILE *file = fopen (filename, "w"); // or "a", "w+", "a+" : file to be opened for writing
    if (file == NULL) {
        perror("");
        return 1;
    }

    fclose(file);
    return 0;
}