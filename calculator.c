#include<stdio.h>
int main(){
    int a,b,add,sub,mul,div,rem;
    printf("Enter First number");
    scanf("%d",&a);
    printf("Enter Second number");
    scanf("%d",&b);
    add=a+b;
    sub=a-b;
    mul=a*b;
    div=a/b;
    rem=a%b;
    printf("Addition=%d\n",add);
    printf("Subtraction=%d\n",sub);
    printf("Multiplication=%d\n",mul);
    printf("Division=%d\n",div);
    printf("Remainder=%d\n",rem); 
    return 0;
}