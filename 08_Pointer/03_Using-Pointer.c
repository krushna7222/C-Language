#include <stdio.h>

void change(int *num)
{
    printf("\nThe Num Value is before adding in function : %d", *num);
    *num += 100;
    printf("\nThe Num Value is after adding in function : %d", *num);
}

void main()
{
    int x = 50;
    printf("\nThe Value of x before adding : %d", x);
    // Call By Reference
    change(&x);
    printf("\nThe Value of x after adding : %d", x); // this output is 150 the reason of using pointer the pointer is stored the address of another variable the the value is change by directly memory address
}