#include <stdio.h>
void main()
{
    int squre[3][3];
    printf("Enter The Numbers : ");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter The Number [%d][%d] : ", i, j);
            scanf("%d", &squre[i][j]);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", squre[i][j]);
        }
        printf("\n");
    }
}