#include <stdio.h>
void add(){
    int a,b;
    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);
    printf("Sum = %d",a+b);
}
int main(){
    add();
    return 0;
}
