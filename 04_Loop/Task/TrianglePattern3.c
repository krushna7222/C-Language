#include <stdio.h>
void main()
{
    int num;
    printf("Enter the number  : ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        for (int k = 1; k <= num - i; k++)
        {
            printf("  ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf(" *");
        }
        printf("\n");
    }
}