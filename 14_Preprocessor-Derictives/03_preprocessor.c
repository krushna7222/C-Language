#include <stdio.h>
#define Age 21

int main()
{

#if Age < 15
    printf("You are Children\n");

#elif Age >= 15 && Age < 20
    printf("You are Teenager\n");

#elif Age >= 15 && Age <= 65
    printf("You are Adult\n");

#endif
}