#include <stdio.h>
#include <string.h>
#include <ctype.h>

void main()
{
    char str1[10];
    char str2[10];
    printf("Enter Password : ");
    scanf("%s", &str1);
    printf("Enter conform Password : ");
    scanf("%s", &str2);

    if (strcmp(str1, str2) == 0)
    {
        printf("Passwords are same");
    }
    else
    {
        printf("Passwords is missmatch!!!");
    }
}
