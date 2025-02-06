#include <stdio.h>
#include <stdlib.h>

void main()
{
    int *ptr;
    int n = 1;

    ptr = (int *)calloc(n, sizeof(int));

    printf("Enter The Number to Get Table : ");
    scanf("%d", ptr);

    for (int i = 1; i <= 10; i++)
    {
        int table = (*ptr) * i;
        printf("\n%d", table);
    }
}
