#include <stdio.h>

int main(int a, int b) {
     int c;

     c = b;
     b = a;
     a = c;

    printf ("%d, %d", a, b);

    return 0;
}