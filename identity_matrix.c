#include <stdio.h>

int main()
{
    int arr[3][3], i, j;
    int identity = 1;

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
            if(i == j)
            {
                if(arr[i][j] != 1)
                    identity = 0;
            }
            else
            {
                if(arr[i][j] != 0)
                    identity = 0;
            }
        }
    }

    if(identity)
        printf("Identity Matrix");
    else
        printf("Not an Identity Matrix");

    return 0;
}