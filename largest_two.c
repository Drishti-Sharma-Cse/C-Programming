#include <stdio.h>
int main(){
    int a, b;
    printf("Enter First Number");
    scanf("%d",& a);
     printf("Enter Second Number");
    scanf("%d",& b);
    if (a>b)
    {
        printf("%d is Largest", a);
    }
    else if (a<b)
    {
       printf("%d is Largest", b);
    }
    else{
        printf("Both numbers are equal");
    }
    return 0;
}