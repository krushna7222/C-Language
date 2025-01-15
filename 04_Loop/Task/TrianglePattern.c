#include <stdio.h>
void main()
{
    int num, i, j;
    printf("Enter the number of rows: ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {
        printf("\n");
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
    }
}