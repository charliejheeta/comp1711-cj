#include <stdio.h>
int main() {
    char name[15]; //defines a character string variable which can contain up to 15 characters
    
    printf ("Hello, please enter your name: ");
    scanf ("%s", name); //reads into data from the keyboard in string format (%s), stores it in the variable 'name'
    printf ("Your name is %s\n", name);

    return 0;
}