#include <stdio.h>

int main()
{
    printf("Today Date is: %d\n", __DATE__);
    printf("The Time is: %d\n", __TIME__);
    printf("File Location Is %s\n", __FILE__);
    // printf("File Size Is %d\n",__FILE_SIZE__);
    // printf("File Name Is %s\n",__FILE_NAME__);
    printf("Line Location is %d\n", __LINE__);
}