#include <stdio.h>

int main () {
    int option;

    while (1) {
        printf ("The loop will continue until you enter the termination value of -1: ");
        scanf ("%d", &option);

       if (option < 0 || option > 100) {
        printf ("Please enter a value between 0 and 100.\n");
       } else if (option = -1) {
        break;
       } else {
        printf ("The loop will continue.");
       }
    }

    return 0;
}