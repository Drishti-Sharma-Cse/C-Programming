#include<stdio.h>
void largest(int a,int b){
    if (a>b){
        printf("%dis largest number", a); 
    }else{
         printf("%dis largest number", b);
    }
}
int main(){
    int i,j;
    printf("Enter two number");
    scanf("%d %d",&i,&j);
    largest(i,j);
    return 0;
}