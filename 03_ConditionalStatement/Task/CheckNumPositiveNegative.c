#include <stdio.h>
void main()
{

    int n;
    printf("\nEnter The Number: ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("\nThe Number is Negative");
    }
    else
    {
        printf("\nThe Number is Positive");
    }
}