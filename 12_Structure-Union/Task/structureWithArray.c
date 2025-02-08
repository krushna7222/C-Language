#include <stdio.h>
struct Employee
{
    int rollno;
    int age;
    char name[20];
};

void main()
{

    struct Employee emp[5];

    printf("Collecting 5 Emp Data...");

    for (int i = 0; i < 5; i++)
    {
        printf("\nEnter The Employee Roll No : ");
        scanf("%d", &emp[i].rollno);
        printf("\nEnter The Employee Name : ");
        scanf("%s", &emp[i].name);
        printf("\nEnter The Employee Age : ");
        scanf("%d", &emp[i].age);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("\n");
        printf("Employee ID: %d\n", emp[i].rollno);
        printf("Employee Name: %s\n", emp[i].name);
        printf("Employee Age: %d\n", emp[i].age);
    }
}