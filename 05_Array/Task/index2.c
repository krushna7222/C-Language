#include <stdio.h>

void main()
{
    int numbers[5];

    printf("Enter three numbers:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        if (numbers[i] % 5 == 0)
        {
            printf("This number is divisible of 5 : %d\n", numbers[i]);
        }
    }
}
