#include <stdio.h>

int main () {
    int number = 25;
    float total = 1;

    for (int i = number; i > 0; i--) {
        total =  total * i;
    };

    printf ("%f\n", total);

    return 0;
}