#include <stdio.h>

int main () {
    int option;

    while (1) {
        printf ("Please select an option between 1 and 5: ");
        scanf ("%d", &option);

        switch (option) {
            case 1: printf ("You have selected option 1\n");
            break;

            case 2: printf ("You have selected option 2\n");
            break;

            case 3: printf ("You have selected option 3\n");
            break;

            case 4: printf ("You have selected option 4\n");
            break;

            case 5: printf ("You have selected option 5\n");
            break;

            default: printf ("You must select an option between 1 and 5.\n");
        }
    }

    return 0;
}