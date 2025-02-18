#include <stdio.h>

#define Areaofrect(length, width) ((length) * (width)) // Preprcessor directive

int main()
{
    int length, width;
    printf("Enter the length of the rectangle: ");
    scanf("%d", &length);

    printf("Enter the width of the rectangle: ");
    scanf("%d", &width);

    int area = Areaofrect(length, width);
    printf("The area of the rectangle is: %d\n", area);
}