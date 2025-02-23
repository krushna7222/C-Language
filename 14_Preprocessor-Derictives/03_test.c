#include <stdio.h>

#define AreaOfSqure(side) (side * side)

int main()
{
    int side;
    printf("Enter Side for Calculate Area Of Squre : ");
    scanf("%d", &side);

    int area = AreaOfSqure(side);
    printf("The area of the Squre is: %d\n", area);
}