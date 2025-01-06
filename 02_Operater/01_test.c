#include <stdio.h>
void main()
{

    printf("\n==========Addition of two numbers from user input==========\n");

    int num1, num2;
    printf("\nEnter the first number : ");
    scanf("%d", &num1);
    printf("\nFirst num is %d:", num1);
    printf("\nEnter the second number : ");
    scanf("%d", &num2);
    printf("\nSecond num is %d:", num2);

    printf("\n\nSum of two numbers %d", num1 + num2);

    printf("\n\n==========Area Of Circle==========\n");

    int radius;
    float pi = 3.14;

    printf("\nEnter the radius of circle : ");
    scanf("%d", &radius);

    float ans = (3.14 * (radius * radius));
    printf("\n\nArea of circle is : %.2f", ans);

    printf("\n\n==========Area of Triangle============\n");

    int base, height;
    printf("\nEnter the base of triangle : ");
    scanf("%d", &base);
    printf("\nEnter the height of triangle : ");
    scanf("%d", &height);
    float area = (base * height) / 2;
    printf("\n\nArea of triangle is : %.2f\n\n", area);
}