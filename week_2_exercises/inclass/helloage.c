#include <stdio.h>
int main() {
    int age;

    printf ("Hello, please enter your age: ");
    scanf ("%d", &age); //& = "address of" operator, scanf requires "memory address" to be able to store operator
    printf ("Your age is %d\n", age); //printf does not require memory address

    return 0;
}

