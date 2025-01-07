#include <stdio.h>

int main()
{
    int num1, num2;
    printf("Entyer The Number1 :");
    scanf("%d", &num1);
    printf("Entyer The Number2 :");
    scanf("%d", &num2);

    int rightShift = num1 >> num2;
    int leftShift = num1 << num2;

    printf("Right Shift Value : %d\n", rightShift);
    printf("Left Shift Value : %d\n", leftShift);
}