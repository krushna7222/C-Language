#include <stdio.h>
#include <string.h>

void main()
{
    char name[100];
    int count = 0;
    // getchar();
    printf("\nEnter your name: ");
    gets(name);
    for (int i = 0; i < strlen(name); i++)
    {
        char ch = name[i];
        if (name[i] == 'a' || name[i] == 'e' || name[i] == 'i' || name[i] == 'o' || name[i] == 'u')
        {
            printf("%c ", ch);
            count++;
        }
    }
    printf("\nNumber of vowels: %d\n", count);
}