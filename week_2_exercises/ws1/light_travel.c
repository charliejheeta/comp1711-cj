#include <stdio.h>

int main() {
    double light_speed = 299792458;
    int days;

    printf ("Please enter the number of days: ");
    scanf ("%d", &days);

    double distance = days * 86400 * light_speed;

    printf ("%.15e\n", distance);

    return 0;
}