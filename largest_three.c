#include <stdio.h>
int main(){
    int a, b,c;
    printf("Enter First Number");
    scanf("%d",& a);
     printf("Enter Second Number");
    scanf("%d",& b);
    printf("Enter Third Number");
    scanf("%d",& c);
    if (a>=b && a>=c)
    {
        printf("%d is Largest", a);
    }
    else if (a<=b && c<=b)
    {
       printf("%d is Largest", b);
    }
    else{
        printf("%d is Largest", c);
    }
    return 0;
}