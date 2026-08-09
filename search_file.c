#include <stdio.h>
#include <string.h>

int main()
{
    FILE *fp;
    char word[50];
    char target[50];
    int found = 0;

    fp = fopen("Drishti.txt", "r");

    if(fp == NULL)
    {
        printf("File could not be opened");
        return 0;
    }

    printf("Enter word to search: ");
    scanf("%s", target);

    while(fscanf(fp, "%s", word) != EOF)
    {
        if(strcmp(word, target) == 0)
        {
            found = 1;
            break;
        }
    }

    fclose(fp);

    if(found)
        printf("Word found");
    else
        printf("Word not found");

    return 0;
}