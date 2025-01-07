#include <stdio.h>
void main()
{
    int n;
    printf("\nEnter the number :");
    scanf("%d", &n);

    if (n % 2 == 0)
    {
        printf("\nThe Given Number is Even");
    }
    else
    {
        printf("\nThe Given Number is Odd");
    }
}