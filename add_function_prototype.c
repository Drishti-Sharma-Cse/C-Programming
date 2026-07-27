#include<stdio.h>
int add(int,int);
int main(){
    int a,b;
    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);
    printf("Sum=%d",add(a,b));
    return 0;
}
int add(int x, int y){
    return x+y;
}