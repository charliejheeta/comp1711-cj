#include <stdio.h>
#include <math.h>

int main() {
    int radius;
    double area;

    printf("Please enter the radius of the circle: ");
    scanf("%d", &radius);

    area = (radius * radius) * M_PI;

    printf("The area of the circle is: %lf \n", area);

    return 0;
}