#include <stdio.h>
void main()
{
    /* Arithmetic operators:-->Which is used to perform mathetamtical operations

        Example:-int x=90;
                  int y=80;

        + Addition Adds together two values x + y
        - Subtraction Subtracts one value from another x - y
        * Multiplication Multiplies two values x * y
        / Division Divides one value by another x / y
        % Modulus Returns the division remainder x % y
        ++ Increment Increases the value of a variable by 1 ++x
        -- Decrement Decreases the value of a variable by 1 --x */

    printf("\n===============Arithmatic Operators==============");

    int a = 80;
    int b = 20;

    printf("\nAddition: %d", a + b);       // addition of two operands
    printf("\nSubtraction: %d", a - b);    // subtraction of two operands
    printf("\nMultiplication: %d", a * b); // Multiplication of two operands
    printf("\nDivision: %d", a / b);       // division of two operands
    printf("\nModulus: %d", a % b);        // This is the modulus Operator returns remainder

    printf("\n===============Increment and Decrement Operators=============");

    int c = 10;
    int d = 20;
    int e = 30;
    int f = 40;

    printf("\nInitial value of c: %d", c);
    printf("\nPost Increment: %d", c++); // Post Increment increases the value of c and returns the value
    printf("\nPost Increment: %d", c);
    printf("\nPost Decrement: %d", d--); // Post Decrement decreases the value of c and returns the value
    printf("\nPost Decrement: %d", d);
    printf("\nPre Increment: %d", ++e); // Pre Increment increases the value of c and returns the new value
    printf("\nPre Decrement: %d", --f); // Pre Decrement decreases the value of c and returns the new value
}