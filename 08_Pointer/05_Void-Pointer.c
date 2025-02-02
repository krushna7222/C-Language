#include <stdio.h>
void main()
{
    int a = 10;
    float pi = 3.14;
    char name = 'K';

    void *ptr;
    ptr = &a;
    printf("Value of a: %d\n", *(int *)ptr);
    ptr = &pi;
    printf("Value of pi: %.2f\n", *(float *)ptr);
    ptr = &name;
    printf("Value of name: %c\n", *(char *)ptr);
}