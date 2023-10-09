# include <stdio.h>

int main() {
    float side1;
    float side2;
    
    printf ("Please enter the first side length of the rectangle: ");
    scanf ("%f", &side1);

    printf ("Please enter the second side length of the rectangle: ");
    scanf ("%f", &side2);

    float area = side1 * side2;

    printf ("The area of the rectangle is %f \n", area);

    return 0;
}