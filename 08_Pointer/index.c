#include <stdio.h>

void doublearr(int *x, int size)
{
    for (int i = 0; i < size; i++)
    {
        *x = *(x) * 2;
        x++;
    }
}
void main()
{
    int size = 10;
    int arr[size];

    for (int i = 1; i <= size; i++)
    {
        arr[i] = i;
    }

    printf("Before Double value\n");

    for (int i = 1; i <= size; i++)
    {
        printf(" %d", arr[i]);
    }

    doublearr(arr, size);

    printf("\nAfter Double value\n");

    for (int i = 1; i <= size; i++)
    {
        printf(" %d", arr[i]);
    }
}