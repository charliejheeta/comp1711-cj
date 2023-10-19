//Question 3: Write a function str_len that takes a string as a parameter and returns its length. Do not use the standard librarys strlen function. Test your function in main.

#include <stdio.h>

int str_len (char* string) {

    int count = 0;

    while (string[count] != '\0') {
        count++;
    }

    return count;
}

int main () {
    
    char string[30];

    printf ("Please enter a string: ");
    scanf ("%s", string);

    printf ("\nThe length of your string is %d.\n", str_len(string));

    return 0;
}