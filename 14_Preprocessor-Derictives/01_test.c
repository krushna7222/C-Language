#include <stdio.h>
void main()
{
    int arr[3];

    for (int i = 0; i < 3; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int smallest = arr[0];
    if (smallest > arr[1])
    {
        printf("Smallest Number Is %d: ", arr[1]);
        return;
    }
    else if (smallest > arr[2])
    {
        printf("Smallest Number Is %d: ", arr[2]);
        return;
    }
    else
    {
        printf("Smallest Number Is %d: ", arr[0]);
    }
}