#include <stdio.h>
int main(){
    int num, sum=0,rem;
    printf("Enter a number: ");
    scanf("%d",& num);
    while(num!=0){
        rem=num%10;
        sum=sum+rem;
        num=num/10;
    }
    printf("Sm of Digits =%d",sum);

    return 0;
}
