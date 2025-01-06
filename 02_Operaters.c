#include <stdio.h>
void main()
{

    printf("\n=====increment and decrement operatoe=====");

    printf("\n============pre-increment==============");

    int age = 21;
    printf("\nAge is: %d", ++age);
    printf("\nAge is: %d", age);

    printf("\n============post-increment==============");

    int age1 = 21;
    printf("\nAge is: %d", age1++);
    printf("\nAge is: %d", age1);

    printf("\n============pre-decrement==============");

    int age2 = 21;
    printf("\nAge is: %d", --age2);
    printf("\nAge is: %d", age2);

    printf("\n============post-decrement==============");

    int age3 = 21;
    printf("\nAge is: %d", age3--);
    printf("\nAge is: %d", age3);
}