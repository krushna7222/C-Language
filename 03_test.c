#include <stdio.h>
void main()
{

    // int num1, num2;
    // printf("Enter the first number : ");
    // scanf("%d", &num1);
    // printf("First num is :", num1);
    // printf("Enter the second number : ");
    // scanf("%d", &num2);
    // printf("First num is :", num2);

    // printf("Sum of two numbers %d", num1 + num2);

    // printf("=========================================");

    // int radius;
    // float pi = 3.14;

    // printf("Enter the radius of circle : ");
    // scanf("%d", &radius);

    // float ans = (3.14 * (radius * radius));
    // printf("Area of circle is : %.2f", ans);

    int base, height;
    printf("Enter the base of triangle : ");
    scanf("%d", &base);
    printf("Enter the height of triangle : ");
    scanf("%d", &height);
    float area = (base * height) / 2;
    printf("Area of triangle is : %.2f", area);
}