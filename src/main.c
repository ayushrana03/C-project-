#include <stdio.h>
#include "student.h"

int main() {
    int choice;

    while (1) {
        printf("\n1. Add Student");
        printf("\n2. Display Students");
        printf("\n3. Search Student");
        printf("\n4. Exit");
        printf("\nEnter Choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addStudent(); break;
            case 2: displayStudents(); break;
            case 3: searchStudent(); break;
            case 4: return 0;
            default: printf("Invalid Choice");
        }
    }

    return 0;
}
