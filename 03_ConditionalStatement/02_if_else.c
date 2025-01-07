#include <stdio.h>
void main()
{
    int age = 20;

    if (age > 18)
    {
        printf("\nYou are eligible to Drive");
        printf("\nYou are eligible to vote");
    }
    else
    {
        printf("\nYou are not eligible due to less than 18 years");
    }
}