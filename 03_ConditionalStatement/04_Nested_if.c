#include <stdio.h>

void main()
{
    int age, weight;
    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your weight: ");
    scanf("%d", &weight);

    if (age >= 20)
    {
        if (weight >= 45)
        {
            printf("\nEligible for blood Dontion");
        }
        else
        {
            printf("\nWeight is not sutaible for blood Donation");
        }
    }
    else
    {
        printf("\nAge is not suitable for blood Donation");
    }
}