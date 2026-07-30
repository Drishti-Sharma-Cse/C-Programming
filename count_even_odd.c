#include <stdio.h>

int main()
{
    int arr[5], i;
    int even = 0, odd = 0;

    printf("Enter 5 numbers:\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);

        if(arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("Even Numbers = %d\n", even);
    printf("Odd Numbers = %d", odd);

    return 0;
}