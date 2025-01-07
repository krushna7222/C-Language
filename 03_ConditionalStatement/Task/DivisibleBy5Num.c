#include <stdio.h>

void main()
{
    int num1, num2, ans;
    printf("Enter first number : ");
    scanf("%d", &num1);

    printf("Enter second number :");
    scanf("%d", &num2);

    ans = num1 + num2;
    printf("\nSum of two numbers is : %d\n", ans);

    if (ans % 5 == 0)
    {
        printf("\nThe %d is divisible by 5", ans);
    }
    else
    {
        printf("\nThe %d is not divisible by 5", ans);
    }
}