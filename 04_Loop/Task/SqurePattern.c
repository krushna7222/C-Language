#include <stdio.h>
void main()
{
    int row, colm, i, j;
    printf("Enter the number of rows: ");
    scanf("%d", &row);
    printf("Enter the number of columns: ");
    scanf("%d", &colm);

    for (i = 0; i <= row; i++)
    {
        printf("\n*");
        for (j = 1; j <= colm; j++)
        {
            printf("\t*");
        }
    }
}