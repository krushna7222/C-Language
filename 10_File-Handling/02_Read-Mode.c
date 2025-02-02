#include <stdio.h>
void main()
{
    FILE *file;
    char datastore[1000];

    char file_location[] = "D:\\JAVA FullStack\\Backend\\C Language\\10_File-Handling\\Files\\temp.txt";
    file = fopen(file_location, "r");

    while (fscanf(file, "%s", datastore) != EOF)
    {
        printf(" %s", datastore);
    }

    fclose(file);
}