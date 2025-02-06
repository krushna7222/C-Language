#include <stdio.h>
#include <stdlib.h>

void main()
{

    int *number;
    number = (int *)malloc(sizeof(int));

    printf("\nEnter The Number And You Get Table :");
    scanf("%d", number);

    for (int i = 1; i <= 10; i++)
    {
        int table = (*number) * i;
        printf("%d\n", table);
    }
}