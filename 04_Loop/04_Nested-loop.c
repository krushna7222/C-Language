#include <stdio.h>
void main()
{
    for (int i = 0; i <= 3; i++)
    {
        printf("\nOuter Loop Start : %d", i);
        for (int j = 0; j <= 3; j++)
        {
            printf("\nInner Loop Start : %d", j);
        }
        printf("\n");
    }
}