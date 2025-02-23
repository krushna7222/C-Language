#include <stdio.h>

int sumfun(int sum)
{
    int add = 0;
    if (sum == 1)
    {
        return 1;
    }

    add = sumfun(sum - 1) + sum;

    return add;
}
void main()
{
    int num;

    printf("Enter a number to get sum: ");
    scanf("%d", &num);
    printf("Sum of natural numbers from 1 to %d is: %d\n", num, sumfun(num));
}