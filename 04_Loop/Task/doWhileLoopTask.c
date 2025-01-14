#include <stdio.h>
void main()
{

    int num;
    int sum = 0;

    do
    {
        printf("\n Enter The Number to get sum (stop negative num to stop) :");
        scanf("%d", &num);
        if (num >= 0)
        {
            sum += num;
        }
        printf("\n %d is +VE", num);
    } while (num >= 1);
    printf("\n\nSum of Numbers : %d", sum);
}