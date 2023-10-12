#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    printf ("Welcome to the guessing game. I have thought of a random number between 1 and 20 - you have 4 attempts to guess it.\n");

    srand (time(NULL));
    int r_number = rand() % 20;
    int lives = 4;
    
    int guess;

    while (lives > 1) {
        printf ("You have %d lives left. Guess a number: ", lives);
        scanf ("%d", &guess);

        if (guess == r_number) {
            printf ("You have guessed the number!\n");
            lives = -1;
        } else if (guess < r_number) {
            printf ("Incorrect guess. Guess higher next time!\n\n");
            lives--;
        } else {
            printf ("Incorrect guess. Guess lower next time!\n\n");
            lives--;
        };
    }

    if (lives = 1) {
        printf ("You have one life left. Please make your final guess: ");
        scanf ("%d", &guess);

        if (guess == r_number) {
            printf ("Congratulations! You guessed it... just about.");
        } else {
            printf ("Sorry. Better luck next time!\n");        }
    };
   
    return 0;

}