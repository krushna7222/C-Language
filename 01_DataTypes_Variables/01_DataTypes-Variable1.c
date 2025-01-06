#include <stdio.h>   //This header file for standerd input output files
#include <stdbool.h> //This header file is used for boolian dataType
void main()
{
    // datatypes
    // int-->int store the numeric value
    // float-->float store the numeric value with decimal point
    // double-->double store the numeric value with decimal point
    // char-->char store the single character
    // bool-->bool store the true or false value
    // int name[]--> this type array  store the string

    int id = 101;                    // id is a variable name
    double pival = 3.14;             // pival is a variable name pi value is stored in pival variable
    char c = 'K';                    // c is a variable name
    char name[] = "Krushna Shahane"; // string value store in this format
    bool condition = true;           // stdbool.h library should be include

    printf("\nId Number is: %d", id);           //%d is the format specifier for numeric values
    printf("\nPI Value: %f", pival);            //%f is the format specifier for float value
    printf("\nMy Name first Character: %c", c); //%c is the format specifier for character value
    printf("\nMy Name is: %s", name);           //%s is the format specifier for float value
    printf("\nCondition: %d", condition);       //%sd is the format specifier for numeric value and boolean value return in numeric value 0->false 1->true
}