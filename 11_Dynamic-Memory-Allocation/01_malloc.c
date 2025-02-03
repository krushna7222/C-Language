#include <stdio.h>
#include <stdlib.h>

void main()
{
    int *ptr;

    ptr = (int *)malloc(5 * sizeof(int));
    ptr[0] = 100;
    ptr[1] = 200;
    ptr[2] = 300;
    ptr[3] = 400;
    ptr[4] = 500;

    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", ptr[i]);
    }
}