#include <stdio.h>

int areaOfRectangle(int length, int width)
{
    return (length * width);
}
void main()
{

    int area = areaOfRectangle(10, 30);
    printf("\nArea Of Rectangle is :  %d", area);
    printf("\n\nArea Of Rectangle is :  %d", areaOfRectangle(20, 20));
}