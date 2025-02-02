#include <stdio.h>
void main()
{
    FILE *file;
    int age;
    char name[10];
    int salary;

    char file_location[] = "D:\\JAVA FullStack\\Backend\\C Language\\10_File-Handling\\Files\\temp.txt";
    file = fopen(file_location, "a");

    // printf("File Created Successfully\n");
    // fprintf(file, "Hello In File Handeling World !!!");
    // printf("Data Is Printed in File!!!\n");

    printf("\nEnter The Employee Name :");
    scanf("%s", &name);

    printf("\nEnter The Age :");
    scanf("%d", &age);

    printf("\nEnter The Employee Salary :");
    scanf("%d", &salary);

    fprintf(file, "\n\nEmoloyee Name is : %s ", name);
    fprintf(file, "\nEmoloyee Age is : %d Year", age);
    fprintf(file, "\nEmoloyee Age is : %d ", salary);
    fclose(file);
}