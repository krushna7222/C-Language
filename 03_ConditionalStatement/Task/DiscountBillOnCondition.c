#include <stdio.h>
void main()
{
    int ammount, discount;

    printf("\nEnter the Shopping Amount : ");
    scanf("%d", &ammount);

    if (ammount >= 1000)
    {
        printf("\nYou get a 20 Percent discount on your total bill.");
        discount = ammount * 0.2;
        printf("\nYour discounted amount is : %d Rs", discount);
        printf("\n\nYour final bill amount is : %d Rs", ammount - discount);
    }
    else if (ammount >= 500)
    {
        printf("\nYou get a 10 Percent discount on your total bill.");
        discount = ammount * 0.1;
        printf("\nYour discounted amount is : %d Rs", discount);
        printf("\n\nYour final bill amount is : %d Rs", ammount - discount);
    }
    else if (ammount >= 100)
    {
        printf("\nYou get a 5 Percent discount on your total bill.");
        discount = ammount * 0.05;
        printf("\nYour discounted amount is : %d Rs", discount);
        printf("\n\nYour final bill amount is : %d Rs", ammount - discount);
    }
    else
    {
        printf("\nNo discount applicable.");
        printf("\nYour final bill amount is : %d Rs", ammount);
    }
}