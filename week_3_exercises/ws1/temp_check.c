#include <stdio.h>

int main() {

    int temp;

    while (1) {

         printf ("Enter the temperature: ");
        scanf ("%d", &temp);
        printf ("The temperature to be checked is: %d \n", temp);
    
        if (temp >= -10 && temp <= 40) {
            printf ("The temperature is within the range.\n");
        } else {
            printf ("The temperature is outside the range.\n");
        }
    }

    return 0;
}