#include <stdio.h>

void printhw(int count)
{
    printf("Hellow World: %d\n", count);
    if (count == 0)
    {
        return;
    }
    printhw(count - 1);
}
void main()
{
    printhw(10);
}