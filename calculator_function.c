#include<stdio.h>
int add(int a,int b){
    return a+b;
}
int sub(int a,int b){
    return a-b;
}
int multiply(int a, int b){
    return a*b;
}
float divide(int a,int b){
    return (float) a / b;
}
int main(){
    int a ,b;
    printf("Enter two numbers");
    scanf("%d %d",&a,&b);
    printf("Add=%d\n",add(a,b));
    printf("Sub=%d\n",sub(a,b));
    printf("Multiply=%d\n",multiply(a,b));
    printf("Divide=%d\n",divide(a,b));
    return 0;
}