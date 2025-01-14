#include <stdio.h>
void main()
{
    int i = 1;

    while (i <= 10) // Use a while loop when the number of iterations is not known beforehand, and you want to check the condition before executing the loop.
    {
        printf("\nThe Value Of i Is : %d", i);
        i++;
    }
}
