#include<stdio.h>
void EvenOdd(int num){
    if (num%2==0){
        printf("Even number");
    }else{
        printf("Odd number");
    }
}
int main(){
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    EvenOdd(n);
    return 0;
}