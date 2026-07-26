#include<stdio.h>
void Prime(int n){
    int i;
    if(n<=1){
        printf("Not prime");
        return;
    }
    for(i=2;i<n;i++){
        if(n%i==0){
            printf("Not Prime");
            return;
        }
    }
    printf("Prime");
}
int main(){
    int num;
    printf("Enter number");
    scanf("%d",&num);
    Prime(num);
    return 0;
}