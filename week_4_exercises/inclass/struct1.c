#include <stdio.h>
#include <string.h>

struct student {
    char name [20];
    char student_id [11]; // Assuming 10 digits.
    unsigned mark;
};

int main () {
    struct student new_student;

    printf ("Please type in the student name (including surname): ");
    scanf ("%s", new_student.name);

    printf ("Please type in the student ID: ");
    scanf ("%s", new_student.student_id);

    printf ("Please type in the student mark: ");
    scanf ("%d", &new_student.mark);


    printf("\nStudent name: %s\n", new_student.name);
    printf("Student ID:   %s\n", new_student.student_id);
    printf("Final mark:   %u\n", new_student.mark);
    return 0;
}