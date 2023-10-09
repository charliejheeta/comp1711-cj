# include <stdio.h>

int main() {
    char new_str[15];
    printf ("Please enter the string you would like to reverse: ");
    scanf ("%s", new_str);

    for (int i=0; i < new_str.length(); i++) {
        swap(new_str[i], new_str.length() - i);
    }
    
    print(new_str);

    return 0;
}