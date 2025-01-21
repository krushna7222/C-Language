#include <stdio.h>

float avarage(int num1, int num2, int num3)
{
    return ((num1 + num2 + num3) / 3);
}
void main()
{

    int num1, num2, num3;

    printf("\n\nEnter The number Number To Get Average : ");
    scanf("%d", &num1);
    printf("\n\nEnter The number Number To Get Average : ");
    scanf("%d", &num2);
    printf("\n\nEnter The number Number To Get Average : ");
    scanf("%d", &num3);

    float average = avarage(num1, num2, num3);

    printf("\nAverage Of Three Number Is : %f", average);
}