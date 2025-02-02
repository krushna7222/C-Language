#include <stdio.h>

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void main()
{
    int a, b;
    a = 10;
    b = 20;
    int *ptr = &a;
    int *ptr1 = &b;

    printf("Value of a before swapping: %d\n", a);
    printf("Value of b before swapping: %d\n", b);
    // swap(&a, &b);
    swap(ptr, ptr1);

    printf("Value of a after swapping: %d\n", a);
    printf("Value of b after swapping: %d\n", b);
}