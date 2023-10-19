//Question 2: Write a function that takes a float radius and returns the volume of a sphere with that radius.

#include <stdio.h>
#include <math.h>

float sphereVolume (double radius) {
    float volume = pow(radius, 3) * M_PI * 4/3;

    return volume;
}

int main () {
    double radius;
    
    printf ("Enter the radius of the sphere: ");
    scanf ("%lf", &radius);

    printf ("\nThe volume of the sphere is approximately %f \n", sphereVolume(radius));

    return 0;
}