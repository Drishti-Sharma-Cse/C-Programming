#include <stdio.h>

int main()
{
    int arr[3][3], i, j, sum = 0;

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
        sum = sum + arr[i][i];
    }

    printf("Sum of Diagonal Elements = %d", sum);

    return 0;
}