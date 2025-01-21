#include <stdio.h>

float areaOfCircle(int r, float pi)
{
    return (pi * (r * r));
}

void main()
{

    int r;
    float pi = 3.14;

    printf("\nEnter The Redius to Get Area Of Circle : ");
    scanf("%d", &r);

    float area = areaOfCircle(r, pi);

    printf("Area Of Circle : %f", area);
}