#include <stdio.h>

void main()
{

    int num;
    printf("\nEnter Number and you get table of this Number : ");
    scanf("%d", &num);

    for (int i = 1; i <= 10; i++)
    {
        printf("\n%d X %d = %d", num, i, num * i);
    }
}