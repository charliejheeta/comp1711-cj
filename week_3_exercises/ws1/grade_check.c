#include <stdio.h>

int main() {

    int mark;

    while (1) {

         printf ("Enter the mark: ");
        scanf ("%d", &mark);
        printf ("The mark to be checked is: %d \n", mark);
        
        if (mark >= 0 && mark <= 100) {

            if (mark >= 70) {
            printf ("You have achieved a distinction!\n");
            } else if (mark >=50) {
            printf ("You have passed!\n");
            } else {
            printf ("You have failed.\n");
            }
        } else {
        printf ("Marks must be between 0 and 100\n");
        }
    }

    return 0;
}