#include <stdio.h>
void main()
{

    char name[5][20] = {"krushna", "Hemraj", "Mahesh", "Suyash", "Ajay"};

    for (int i = 0; i < 5; i++)
    {
        printf("%s\n", name[i]);
    }
}