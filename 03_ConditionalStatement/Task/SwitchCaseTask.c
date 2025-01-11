#include <stdio.h>
void main()
{

    char day;
    printf("Enter the day initia Character: ");
    scanf("%c", &day);

    switch (day)
    {
    case 's':
        printf("\nThe day is Sunday");
        break;
    case 'm':
        printf("\nThe day is Monday");
        break;
    case 't':
        printf("\nThe day is Tuesday");
        break;
    case 'w':
        printf("\nThe day is Wednesday");
        break;
    case 'T':
        printf("\nThe day is Thursday");
        break;
    case 'F':
        printf("\nThe day is Friday");
        break;
    case 'S':
        printf("\nThe day is Saturday");
        break;
    default:
        printf("\nInvalid input. Please enter valid Character.");
    }
}