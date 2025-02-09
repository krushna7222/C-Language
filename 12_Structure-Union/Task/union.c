#include <stdio.h>
#include <string.h>

union Employee
{
    int empid;
    char name[50];
    float salary;
};

int main()
{
    union Employee emp;
    char choice;

    while (1)
    {
        printf("\nEnter your choice:\n");
        printf("n -> Enter Name\n");
        printf("s -> Enter Salary\n");
        printf("i -> Enter ID\n");
        printf("q -> Quit\n");
        printf("Choice: ");
        scanf(" %c", &choice);

        if (choice == 'q' || choice == 'Q')
        {
            printf("Exiting...\n");
            break;
        }

        switch (choice)
        {
        case 'n':
            printf("Enter Name: ");
            scanf("%s", emp.name);
            printf("Name: %s\n", emp.name);
            break;

        case 's':
            printf("Enter Salary: ");
            scanf("%f", &emp.salary);
            printf("Salary: %.2f\n", emp.salary);
            break;

        case 'i':
            printf("Enter ID: ");
            scanf("%d", &emp.empid);
            printf("Employee ID: %d\n", emp.empid);
            break;

        default:
            printf("Invalid choice. Try again.\n");
        }
    }
}
