#include <stdio.h>
#include <stdlib.h>

void main()
{
    int *id;
    char *name;
    int *age;
    int *salary;
    id = (int *)malloc(sizeof(int));
    name = (char *)malloc(100 * sizeof(char));
    age = (int *)malloc(sizeof(int));
    salary = (int *)malloc(sizeof(int));

    if (name == NULL || salary == NULL)
    {
        printf("Memory allocation is failed!!!");
    }

    printf("\nEnter The ID For Employee :");
    scanf("%d", id);

    printf("\nEnter The Name Of Employee :");
    // gets(name);
    scanf("%s", name);

    printf("\nEnter The Age For Employee :");
    scanf("%d", age);

    printf("\nEnter The Salary Of Employee :");
    scanf("%d", salary);

    printf("\nId OF Employee is : %d", *id);
    printf("\nName OF Employee is : %s", name);
    printf("\nage OF Employee is : %d", *age);
    printf("\nSalary OF Employee is : %d", *salary);
}