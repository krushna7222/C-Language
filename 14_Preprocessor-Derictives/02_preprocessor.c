#include <stdio.h>

#define MTRtoCM(mtr) (mtr * 100) // Preprcessor directive

int main()
{
    int mtr;
    printf("\nEnter the Value in Meter and get in CM: ");
    scanf("%d", &mtr);

    int CM = MTRtoCM(mtr);
    printf("\nYour Value in CM : %d\n", CM);
}