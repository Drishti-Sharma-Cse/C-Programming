#include<stdio.h>
int main(){
    int a,b;
    printf("Enter First number");
    scanf("%d",&a);
    printf("Enter Second number");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After Swapping \n First number %d \n Second number %d \n",a,b);
    return 0;
}