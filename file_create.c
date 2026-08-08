#include <stdio.h>

int main()
{
    FILE *fp;

    fp = fopen("Drishti.txt", "w");

    if(fp == NULL)
    {
        printf("File could not be created");
    }
    else
    {
        printf("File created successfully");
        fclose(fp);
    }

    return 0;
}