#include <stdio.h>
#include <string.h>
#include <ctype.h>

void main()
{
    char str[100];
    printf("Enter your name In UPPER Case : ");
    gets(str);

    for (int i = 0; i < strlen(str); i++)
    {
        str[i] = tolower(str[i]);
    }
    printf("\n %s", str);

    printf("\n\nEnter your name In Lower Case : ");
    gets(str);

    for (int i = 0; i < strlen(str); i++)
    {
        str[i] = toupper(str[i]);
    }
    printf("\n %s", str);
}