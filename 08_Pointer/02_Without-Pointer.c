#include <stdio.h>

void change(int num)
{
    printf("\nThe Num Value is : %d", num);
    num += 100;
    printf("\nThe Num Value is : %d", num);
}

void main()
{
    int x = 50;
    printf("\nThe Value of x before adding : %d", x);
    // Call By Value
    change(x);
    printf("\nThe Value of x after adding : %d", x); // the output is 50 because the copy of value is send
}