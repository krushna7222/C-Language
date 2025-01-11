#include <stdio.h>
void main()
{

    int day;
    printf("Enter the day of the week (1-7): ");
    scanf("%d", &day);

    switch (day)
    {
    case 1:
        printf("\nThe day is Sunday");
        break;
    case 2:
        printf("\nThe day is Monday");
        break;
    case 3:
        printf("\nThe day is Tuesday");
        break;
    case 4:
        printf("\nThe day is Wednesday");
        break;
    case 5:
        printf("\nThe day is Thursday");
        break;
    case 6:
        printf("\nThe day is Friday");
        break;
    case 7:
        printf("\nThe day is Saturday");
        break;
    default:
        printf("\nInvalid input. Please enter a number between 1 and 7.");
    }
}
