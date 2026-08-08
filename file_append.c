#include <stdio.h>

int main()
{
    FILE *fp;

    fp = fopen("Drishti.txt", "a");

    if(fp == NULL)
    {
        printf("File could not be opened");
    }
    else
    {
        fprintf(fp, "\nThis line was appended.");
        fclose(fp);

        printf("Data appended successfully");
    }

    return 0;
}