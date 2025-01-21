#include <stdio.h>

float GstCalculator(float ammount)
{

    return (ammount * 0.18);
}
void main()
{
    float ammount;
    printf("Enter The Ammount : ");
    scanf("%f", &ammount);

    float gst = GstCalculator(ammount);
    printf("Your Final Ammount Is : %.2f", ammount + gst);
}