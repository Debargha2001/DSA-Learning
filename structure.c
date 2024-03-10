#include<stdio.h>

typedef struct Student {
    char* name;
    int roll;
    char* dept;
} Student;

int main(){
    Student s1 = {"abc", 2, "ece"};
    Student s2;
    s2.dept = "ece";
    s2.name = "abc";
    s2.roll = 1;
    printf("\n*****Student 1******\n");
    printf(" name: %s \n dept: %s \n roll: %d", s1.name, s1.dept, s1.roll);
    printf("\n*****Student 2******\n");
    printf(" name: %s \n dept: %s \n roll: %d\n", s2.name, s2.dept, s2.roll);
    return 0;
}