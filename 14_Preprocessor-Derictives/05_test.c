#include <stdio.h>
#include <stdlib.h>

void main()
{
    int *ptr;

    ptr = (int *)calloc(5, sizeof(int));
    ptr[0] = 101;
    ptr[1] = 201;
    ptr[2] = 301;
    ptr[3] = 401;
    ptr[4] = 501;

    for (int i = 0; i < 5; i++)
    {
        printf("Employee ID IS  %d\n", ptr[i]);
    }
}