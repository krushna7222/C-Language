#include <stdio.h>
#include <stdlib.h>

void main()
{
    int *ptr;
    int n = 20;

    printf("The Value Of Memory block is : %d\n ", n);

    ptr = (int *)calloc(n, sizeof(int));

    for (int i = 0; i < n; i++)
    {
        ptr[i] = i + 1;
        printf("\n%d", ptr[i]);
    }
    // for (int j = 0; j < n; j++)
    // {
    //     printf("\n%d", ptr[j]);
    // }
}