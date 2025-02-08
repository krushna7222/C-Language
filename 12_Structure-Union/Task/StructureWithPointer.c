#include <stdio.h>
struct Employee
{
    int *rollno;
    int *age;
};

void main()
{

    struct Employee emp[3];

    printf("\n\nCollecting 3 Emp Data...\n");

    for (int i = 0; i < 3; i++)
    {
        printf("\nEnter The Employee Roll No : ");
        scanf("%d", &emp[i].rollno);
        printf("\nEnter The Employee Age : ");
        scanf("%d", &emp[i].age);
    }

    for (int i = 0; i < 3; i++)
    {
        printf("\n");
        printf("Employee ID: %d\n", emp[i].rollno);
        printf("Employee Age: %d\n", emp[i].age);
    }
}