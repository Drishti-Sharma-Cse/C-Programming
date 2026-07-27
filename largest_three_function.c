#include<stdio.h>
void largest(int a,int b , int c){
    if(a>=b && a>=c){
        printf("%d is largest",a);
    }else if(b>=a && b>=c){
        printf("%d is largest",b);
    }else{
         printf("%d is largest",c);
    }
}
int main(){
    int x,y,z;
    printf("Enter three numbers");
    scanf("%d %d %d",&x,&y,&z);
    largest(x,y,z);
    return 0;
}  
