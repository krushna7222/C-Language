#include <stdio.h>
#include <stdbool.h>
void main()
{
    // datatypes
    // int-->int store the numeric value
    // float-->float store the numeric value with decimal point
    // double-->double store the numeric value with decimal point
    // char-->char store the single character
    // bool-->bool store the true or false value
    // int name[]--> this type array  store the string

    int id = 101;
    double pival = 3.14;
    char c = 'K';
    char name[] = "Krushna Shahane"; // string value store in this format
    bool condition = true;           // stdbool.h library should be include

    printf("\nId Number is: %d", id);           //%d is the format specifier for numeric values
    printf("\nPI Value: %f", pival);            //%f is the format specifier for float value
    printf("\nMy Name first Character: %c", c); //%c is the format specifier for character value
    printf("\nMy Name is: %s", name);           //%s is the format specifier for float value
    printf("\nCondition: %d", condition);       //%sd is the format specifier for numeric value and boolean value return in numeric value 0->false 1->true
}