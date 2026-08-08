#include <stdio.h>

int main()
{
    FILE *fp;
    char ch;

    fp = fopen("Drishti.txt", "r");

    if(fp == NULL)
    {
        printf("File could not be opened");
    }
    else
    {
        while((ch = fgetc(fp)) != EOF)
        {
            printf("%c", ch);
        }

        fclose(fp);
    }

    return 0;
}