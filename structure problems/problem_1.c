// write a program to take input of n number of students and their details. And show the details

#include <stdlib.h>
#include <stdio.h>

typedef struct Student
{
    // char *name;
    // char *dept;
    char name[100];
    char dept[100];
    int roll;
} Student;

int main()
{
    // Student s[100];
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);
    Student *s = (Student *)calloc(n, sizeof(Student));

    int i;
    for (i = 0; i < n; i++)
    {
        printf("Enter details of student %d\n", i + 1);
        // s[i].name = (char *)malloc(100 * sizeof(char));
        printf("Name: ");
        scanf("%s", s[i].name);
        getchar();
        // s[i].dept = (char *)malloc(100 * sizeof(char));
        printf("Department: ");
        scanf("%s", s[i].dept);
        getchar();
        printf("Roll No.: ");
        scanf("%d", &s[i].roll);
    }
    printf("\n*****Details of Students*****\n");
    for (i = 0; i < n; i++)
    {
        printf("Student %d\n", i + 1);
        printf("Name: %s\n", s[i].name);
        printf("Department: %s\n", s[i].dept);
        printf("Roll No.: %d\n", s[i].roll);
    }

    // for (i = 0; i < n; i++)
    // {
    //     free(s[i].name);
    //     free(s[i].dept);
    // }
    free(s);
    return 0;
}