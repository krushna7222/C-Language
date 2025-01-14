#include <stdio.h>
void main()
{
    int user;

    printf("\nEnter a number : ");
    scanf("%d", &user);

    while (user <= 100)
    {
        printf("\nEnter a number : ");
        scanf("%d", &user);
        if (user > 100)
        {
            printf("Offfer is valid for 100 customer only.");
            break;
        }
        printf("Entry Granted");

        user++;
    }
}