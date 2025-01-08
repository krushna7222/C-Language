#include <stdio.h>
void main()
{
    int marks;

    printf("\nEnter your marks and Get Your Grade : ");
    scanf("%d", &marks);

    if (marks > 100)
    {
        printf("Invalid Marks Plz Enter Valid Mark !!! ");
    }
    else if (marks >= 90 && marks <= 100)
    {
        printf("Congratulations Your Gread is A+  !!!");
    }
    else if (marks >= 80 && marks < 90)
    {
        printf("Congratulations Your Gread is A !!!");
    }
    else if (marks >= 70 && marks < 80)
    {
        printf("Congratulations Your Gread is B+ !!!");
    }
    else if (marks >= 55 && marks < 70)
    {
        printf("Congratulations Your Gread is B !!!");
    }
    else if (marks >= 45 && marks < 55)
    {
        printf("Congratulations Your Gread is C !!!");
    }
    else if (marks >= 35 && marks < 45)
    {
        printf("Your Gread is D !!!");
    }
    else
    {
        printf("Sorry, your Result is failed. !!!");
    }
}