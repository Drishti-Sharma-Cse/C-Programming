#include<stdio.h>
int main(){
    int a,b,temp;
    printf("Enter First number");
    scanf("%d",&a);
    printf("Enter Second number");
    scanf("%d",&b);
    temp=a;
    a=b;
    b=temp;
    printf("After Swapping \n First number %d \n Second number %d \n",a,b);
    return 0;
}