#include <stdio.h>

void main()
{
    int age, experiance, degree;

    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter your year of experiance: ");
    scanf("%d", &experiance);
    printf("Enter your degree (if yes then 1 else 0): ");
    scanf("%d", &degree);

    switch (1)
    {
    case 1:
        if (age < 24)
        {
            printf("\nSorry,Your age is not sutaible for further process.");
            break;
        }

    case 2:
        if (experiance < 2)
        {
            printf("\nSorry,Your Years of experiance is not sutaible for further process.");
            break;
        }

    case 3:
        if (!degree)
        {
            printf("\nSorry, Degree is mandetory for further process.");
            break;
        }

    default:
        printf("Congratulation,You are Eligible For further Process.");
        break;
    }

    // if (age > 24 && experiance >= 2 && degree)
    // {
    //     printf("You are eligible for ferther process !!!");
    // }
    // else
    // {
    //     printf("Sorry, you are not eligible for further process.");
    // }
}