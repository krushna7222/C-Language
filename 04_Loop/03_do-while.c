#include <stdio.h>
void main()
{
    int i = 10;
    do // the first comdition is default true in do while loop and after second time check the condition in while loop
    {
        printf("%d\n", i);
        i--;
    } while (i > 11);
}