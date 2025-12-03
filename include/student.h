#ifndef STUDENT_H
#define STUDENT_H

struct Student {
    int roll;
    char name[50];
    float marks;
};

void addStudent();
void displayStudents();
void searchStudent();

#endif
