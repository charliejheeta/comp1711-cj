#include <stdio.h>

//Question 4: Write a function named isPrime that takes an integer as a parameter and returns 1 if the number is prime and 0 otherwise. Test this function in your main function.

int isPrime (int input) {
    
    if (input < 1) {
        printf ("Please enter a number greater than 0.\n"); 
        return 2;
    } else if (input == 1 || input == 2) {
        return 0;
    } 
    
    int i = 2;
    while (i < input) {
        if (input % i == 0) {
            return 1;
        }
        i++;
    }

    return 0;
} 

int main () {

    while (1) {
        int input;
        printf ("\nPlease enter a number: ");
        scanf ("%d", &input);
        
        switch(isPrime(input)) {
            case 0: printf ("The number is prime.\n");
            break;

            case 1: printf ("The number is not prime.\n");
            break;

            default: break;
        }
    }

    return 0;
   
}
