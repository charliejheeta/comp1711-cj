#include <stdio.h>

int main() {
    int number;

    while (1) {

        printf ("Enter number: ");
        scanf ("%d", &number);

        if (number > 0) {
            printf ("Your number is positive.\n");
        } else if (number < 0) {
            printf ("Your number is negative.\n");
        } else {
            printf ("Your number is neither positive nor negative.\n");
        }
    }
    
   return 0;
}