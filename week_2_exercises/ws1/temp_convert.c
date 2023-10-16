#include <stdio.h>

int main() {
    float temp = 100;

    temp = ((temp - 32) *5) / 9;

    printf ("%f°C\n", temp);

    return 0;
}