#include <stdio.h>

int main()
{
    char str1[100], str2[100];
    int i, j, found;
    int len1 = 0, len2 = 0;
    int anagram = 1;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    while(str1[len1] != '\0')
        len1++;

    while(str2[len2] != '\0')
        len2++;

    if(len1 != len2)
    {
        anagram = 0;
    }
    else
    {
        for(i = 0; i < len1; i++)
        {
            found = 0;

            for(j = 0; j < len2; j++)
            {
                if(str1[i] == str2[j])
                {
                    found = 1;
                    break;
                }
            }

            if(found == 0)
            {
                anagram = 0;
                break;
            }
        }
    }

    if(anagram)
        printf("Strings are Anagrams");
    else
        printf("Strings are Not Anagrams");

    return 0;
}