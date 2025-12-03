#include <stdio.h>
#include "student.h"

struct Student s[100];
int count = 0;

void addStudent() {
    printf("Enter Roll: ");
    scanf("%d", &s[count].roll);

    printf("Enter Name: ");
    scanf("%s", s[count].name);

    printf("Enter Marks: ");
    scanf("%f", &s[count].marks);

    count++;
    printf("Student Added Successfully\n");
}

void displayStudents() {
    int i;
    for (i = 0; i < count; i++) {
        printf("\nRoll: %d", s[i].roll);
        printf("\nName: %s", s[i].name);
        printf("\nMarks: %.2f\n", s[i].marks);
    }
}

void searchStudent() {
    int r, i, found = 0;
    printf("Enter Roll to Search: ");
    scanf("%d", &r);

    for (i = 0; i < count; i++) {
        if (s[i].roll == r) {
            printf("Record Found!");
            found = 1;
        }
    }

    if (!found)
        printf("Student Not Found");
}
