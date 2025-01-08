#include <stdio.h>

void main()
{
    int num1, num2, num3;

    printf("\nEnter the numbers One: ");
    scanf("%d", &num1);

    printf("\nEnter The numbers Two: ");
    scanf("%d", &num2);

    printf("\nEnter The numbers Three: ");
    scanf("%d", &num3);

    if (num1 > num2 && num1 > num3)
    {
        printf("\nNumber One %d is Largest Number ", num1);
    }
    else if (num2 > num1 && num2 > num3)
    {
        printf("\nNumber Two %d is Largest Number ", num2);
    }
    else if (num2 > num1 && num2 > num3)
    {
        printf("\nNumber Three %d is Largest Number ", num3);
    }
    else if (num1 == num2 && num2 > num3)
    {
        printf("\nAll numbers are equal");
    }
    else
    {
        printf("\nNumber is not equal");
    }
}