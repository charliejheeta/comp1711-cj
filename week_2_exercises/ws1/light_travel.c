#include <stdio.h>

int main() {
    long long int light_speed = 299792458;
    int days;

    printf ("Please enter the number of days: ");
    scanf ("%d", &days);

    long long int distance = days * 86400 * light_speed;

    printf ("%lld\n", distance);

    return 0;
}