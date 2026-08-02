#include <stdio.h>

int main()
{
    int arr[2][2], i, j;

    printf("Enter 2x2 matrix:\n");

    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 2; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Transpose of Matrix:\n");

    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 2; j++)
        {
            printf("%d ", arr[j][i]);
        }
        printf("\n");
    }

    return 0;
}