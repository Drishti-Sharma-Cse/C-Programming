#include <stdio.h>

int main()
{
    FILE *fp;
    char ch;
    int lines = 0, words = 0, characters = 0;
    int inWord = 0;

    fp = fopen("Drishti.txt", "r");

    if(fp == NULL)
    {
        printf("File could not be opened");
        return 0;
    }

    while((ch = fgetc(fp)) != EOF)
    {
        characters++;

        if(ch == '\n')
        {
            lines++;
        }

        if(ch == ' ' || ch == '\n' || ch == '\t')
        {
            inWord = 0;
        }
        else if(inWord == 0)
        {
            words++;
            inWord = 1;
        }
    }

    fclose(fp);

    printf("Lines = %d\n", lines);
    printf("Words = %d\n", words);
    printf("Characters = %d", characters);

    return 0;
}