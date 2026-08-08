#include <stdio.h>

int main()
{
    FILE *fp;

    fp = fopen("Drishti.txt", "w");

    if(fp == NULL)
    {
        printf("File could not be opened");
    }
    else
    {
        fprintf(fp, "Hello, this is my first file.");
        fclose(fp);

        printf("Data written successfully");
    }

    return 0;
}