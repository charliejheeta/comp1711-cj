# include <stdio.h>

int main () {
    int a;
    int b;

    printf ("Please enter the first integer you would like to add: ");
    scanf ("%d", &a);

    printf ("Please enter the second integer you would like to add: ");
    scanf ("%d", &b);

    int c = a + b;

    printf ("The sum is %d. \n", c);

    return 0;
}