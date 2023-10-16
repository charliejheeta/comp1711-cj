#include <stdio.h>

int main() {
    int number;

    while (1) {

        printf ("Enter number: ");
        scanf ("%d", &number);

        if (number == 0) {
            printf ("Please enter a non-zero number.\n");
        } else if (number % 4 == 0 && number % 5 == 0) {
            printf ("Your number is divisible by both 4 and 5.\n");
        } else {
            printf ("Your number is not divisible by 4 and 5.\n");
        }
    }
    
   return 0;
}