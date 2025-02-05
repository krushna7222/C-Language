#include <stdio.h>
#include <stdlib.h>

void main()
{
    int *ptr;
    int n;
    int m;
    int num;

    printf("Enter How many memory block :");
    scanf("%d", &n);

    ptr = (int *)calloc(n, sizeof(int));

    printf("Enter The Two Number  : \n");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", ptr + i);
    }
    printf("You entered value\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", *(ptr + i));
    }

    printf("You Want Allocate More Memory enter 1 : ");
    scanf("%d", &num);

    printf("%d", num);

    if (num == 1)
    {

        printf("\nHow Many allocate more memory : ");
        scanf("%d", &m);

        ptr = (int *)realloc(ptr, (n + m) * sizeof(int));

        printf("Enter The More Three Number  : \n");

        for (int i = n; i < (n + m); i++)
        {
            scanf("%d", ptr + i);
        }
        printf("You entered new values with calloc function value\n");

        for (int i = 0; i < (n + m); i++)
        {
            printf("%d\n", *(ptr + i));
        }
    }
    else
    {
        printf("Bye!!!");
    }

    printf("Free the allocated memory !!");
    free(ptr);
}