#include <stdio.h>
#include <limits.h>

int main() {
    int a_int;
    float b_float;
    double c_double;
    char d_char;

    printf ("The size of the integer variable is %lu bytes \n", sizeof(a_int));
    printf ("The size of the float variable is %lu bytes \n", sizeof(b_float));
    printf ("The size of the double variable is %lu bytes \n", sizeof(c_double));
    printf ("The size of the character variable is %lu byte \n", sizeof(d_char));

    return 0;
}