#include <stdio.h>
#include <stdlib.h>

void main()
{

    int *length;
    int *width;
    length = (int *)malloc(sizeof(int));
    width = (int *)malloc(sizeof(int));

    printf("\nEnter The Length of Rectangle :");
    scanf("%d", length);
    printf("\nEnter The Width of Rectangle :");
    scanf("%d", width);

    int area = (*length) * (*width);
    printf("\nArea of rectangle is : %d", area);
}