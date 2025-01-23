#include <stdio.h>

int factorialfun(int num)
{
    int fact = 0;
    if (num == 1 || num == 0)
    {
        return 1;
    }

    fact = factorialfun(num - 1) * num;

    return fact;
}
void main()
{
    int num;
    printf("Enter the number to get factorial : ");
    scanf("%d", &num);

    printf("The Factorial is : %d", factorialfun(num));
}