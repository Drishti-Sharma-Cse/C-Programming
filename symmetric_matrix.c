#include <stdio.h>

int main()
{
    int arr[3][3];
    int i, j;
    int symmetric = 1;

    printf("Enter 3x3 matrix:\n");

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            if(arr[i][j] != arr[j][i])
            {
                symmetric = 0;
                break;
            }
        }
    }

    if(symmetric)
        printf("Symmetric Matrix");
    else
        printf("Not a Symmetric Matrix");

    return 0;
}