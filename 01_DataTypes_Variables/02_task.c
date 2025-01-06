#include <stdio.h>
#include <stdbool.h>
void main()
{
    int id = 1001;
    float salary = 90000.00;
    char specialchar = '*';
    bool condition = true;
    int balance = 10000;
    char bankname[] = "HDFCbank";

    // print tha data

    printf("The id of employee : %d\n", id);
    printf("The Salary of Person : %.2f\n", salary);
    printf("The Special Character : %c\n", specialchar);
    printf("The Condition is True : %d\n", condition);
    printf("The atm is of %s and Balance is %d", bankname, balance);
}