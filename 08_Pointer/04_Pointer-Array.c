#include <stdio.h>
void main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *ptr = arr;

    for (int i = 0; i < 10; i++)
    {
        printf("\n%d", *ptr);
        ptr++;
    }
}