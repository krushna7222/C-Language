#include <stdio.h>

void main()
{
    int num = 100;
    int num1 = 200;

    printf("\nThe Value Of Num is : %d", num);
    printf("\nThe Memory Address Of Num is : %d", &num);

    printf("\n--------------------------------Using Pointer------------------------------");

    int *ptr;
    ptr = &num;

    printf("\nThe saved value in pointer is : %d", ptr);
    printf("\nThe ptr is : %d", *ptr);
}