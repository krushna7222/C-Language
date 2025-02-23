#include <stdio.h>

#define Feature 1

int main()
{
#if Feature == 0
#error "Feature enabled at least 1 \n"
#endif
    printf("Feature enabled now");
}