#include <stdio.h>

int main() {
    

    for(int i = 0; i < 1000; i+=11) {
        printf ("%d\n", i);
    };

    printf ("\n");

    for(int i = 1; i < 11; i+=1) {
        printf ("%d\n", i);
    };

    printf ("\n");

    for(int a = 0; a < 51; a +=2) {
        printf ("%d\n", a);
    };

    printf ("\n");
    
    for(int b = 100; b > -1; b-=5) {
        printf ("%d\n", b);
    };

    return 0;
}