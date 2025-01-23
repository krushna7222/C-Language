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

    printf("%d", sumfun(10));
}