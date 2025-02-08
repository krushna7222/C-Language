#include <stdio.h>
struct Student
{
    int rollno;
    char name[20];
    int marks;
};

void main()
{

    struct Student std1;

    printf("\nEnter The Roll No Of Student : ");
    scanf("%d", &std1.rollno);
    getchar();
    printf("\nEnter The Name Of Student : ");
    gets(std1.name);
    printf("\nEnter The Marks Of Student : ");
    scanf("%d", &std1.marks);

    printf("\n");
    printf("\nStudent Roll No is : %d", std1.rollno);
    printf("\nStudent Name is : %s", std1.name);
    printf("\nStudent Marks is : %d", std1.marks);
}