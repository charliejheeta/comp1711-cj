/* Question 5
Write a function named concatStrings that takes two strings as parameters.
The function should concatenate the second string at the end of the first string and return the new concatenated string.
Do not use the standard library strcat function. 
Test the function in your main function. */

//create empty character, loop through string 1 and change each character of the array individually to avoid use of the strcat function
#include <stdio.h>
#include <string.h>

char concatStrings(char string1[], char string2[]) {
    
    int i = 0;
    while (i < strlen(string2)) {
        string1[strlen(string1) + 1] = string2[i];
        i++;
    }

    string1[strlen(string1)] = '\0';

    printf ("%s", string1);
    return string1;
}

int main () {
    
    char string1[20], string2[20];
    printf ("Please enter two strings which you would like to concatenate, separated by a space: ");
    scanf ("%s, %s", string1, string2);

    printf ("The concatenation of your strings is '%s'.", concatStrings(string1, string2));
    
    return 0;
}