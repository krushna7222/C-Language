#include <stdio.h>
struct Employee
{
    int id;
    int age;
    double salary;
};

void main()
{
    struct Employee emp1;

    emp1.id = 101;
    emp1.age = 25;
    emp1.salary = 63000;

    printf("\n");
    printf("\nEmployee ID : %d", emp1.id);
    printf("\nEmployee Age : %d", emp1.age);
    printf("\nEmployee Salary : %.2f", emp1.salary);

    struct Employee emp2;

    emp2.id = 102;
    emp2.age = 27;
    emp2.salary = 49000;

    printf("\n");
    printf("\nEmployee ID : %d", emp2.id);
    printf("\nEmployee Age : %d", emp2.age);
    printf("\nEmployee Salary : %.2f", emp2.salary);
}