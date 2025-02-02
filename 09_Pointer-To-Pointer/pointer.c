#include <stdio.h>
void main()
{
    int value = 100;
    int *ptr = &value;
    int **ptr1 = &ptr;
    int ***ptr2 = &ptr1;
    int ****ptr3 = &ptr2;
    printf("Value: %d\n", value);
    printf("The Value of PTR is %d\n", *ptr);
    printf("The Value of PTR1 is %d\n", **ptr1);
    printf("The Value of PTR2 is %d\n", ***ptr2);
    printf("The Value of PTR3 is %d\n", ****ptr3);
}