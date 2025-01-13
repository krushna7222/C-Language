#include <stdio.h>

void main()
{
    int num;
    for (int i = 1; i <= 4; i++)
    {
        printf("\n Enter The Number %d : ", i);
        scanf("%d", &num);

        if (num % 2 == 0)
        {
            printf("\n The Number %d is Even", num);
        }
        else
        {
            printf("\n The Number %d is Odd", num);
        }
    }
}