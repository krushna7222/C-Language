
#include <stdio.h>
#include <stdlib.h>

void main()
{
    int *ptr;
    int n;

    ptr = (int *)calloc(10, sizeof(int));

    printf("Enter The Number to Get Table : ");
    scanf("%d", &n);

    for (int i = 1; i <= 10; i++)
    {
        ptr[i] = n * i;
        printf("%d X %d = %d\n", n, i, ptr[i]);
    }
}