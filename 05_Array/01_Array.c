#include <stdio.h>
void main()
{

    int marks[10];

    marks[0] = 87;
    marks[1] = 67;
    marks[2] = 83;
    marks[3] = 55;
    marks[4] = 69;

    marks[9] = 85;

    for (int i = 0; i < 10; i++)
    {
        printf("\nThe marks of student id : %d", marks[i]);
    }
}