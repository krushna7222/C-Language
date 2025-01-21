#include <stdio.h>

int swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;

    printf("\n\nThe Swapped Value Of A is %d", a);
    printf("\nThen Swapped Value Of B is %d", b);
}
void main()
{
    int a, b;

    printf("\nEnter The Value Of A : ");
    scanf("%d", &a);
    printf("\nEnter The Value Of B : ");
    scanf("%d", &b);

    printf("\n\nThe Value Of A is %d", a);
    printf("\nThe Value Of B is %d", b);

    swap(a, b);
}