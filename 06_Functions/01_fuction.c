#include <stdio.h>

// returntype function and function body
void greeting()
{
    printf("\nWelcome to My Website !!!");
    printf("\nYou are in Greeting Function...\n\n");
}

void addition(int a, int b)
{
    printf("\nAddition of Two numbers is %d", a + b);
}

void main()
{

    greeting(); // function calling
    greeting();

    addition(10, 20);
    addition(20, 30);
    addition(50, 50);
}
