//Question 1: Calculate Area of a Circle Write a C program that defines a function circleArea which takes a float radius as a parameter and returns the area of the circle. Test this function in your main function


#include <stdio.h>
#include <math.h>

float circleArea (float radius) {
    float area = radius * radius * M_PI;

    return area;
}

int main () {
    float radius;
    
    printf ("Enter the radius of the circle: ");
    scanf ("%f", &radius);

    printf ("\n The area of the circle is approximately %f \n", circleArea(radius));

    return 0;
}