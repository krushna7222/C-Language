#include <stdio.h>

union Number
{
    int intvalue;
    float floatvalue;
    char charvalue;
    double doublevalue;
};

void main()
{
    union Number num;
    num.intvalue = 10;
    num.floatvalue = 20.5;
    num.charvalue = 'A';
    num.doublevalue = 30.7;
    printf("Integer value: %d\n", num.intvalue);
    printf("Float value: %.2f\n", num.floatvalue);
    printf("Character value: %c\n", num.charvalue);
    printf("Double value: %.2f\n", num.doublevalue);
}
