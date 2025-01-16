#include <stdio.h>

void main()
{
    int numbers[3];
    int smallest;

    printf("Enter three numbers:\n");
    for (int i = 0; i < 3; i++)
    {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // for (int i = 0; i < 3; i++)
    // {
    //     printf("%d\n", numbers[i]);
    // }

    smallest = numbers[0];
    for (int i = 1; i < 3; i++)
    {
        if (numbers[i] < smallest)
        {
            smallest = numbers[i];
        }
    }

    printf("The smallest number is: %d\n", smallest);
}
