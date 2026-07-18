#include<stdio.h>
int main(){
    int l,b,areaS,areaR,s;
    printf("Enter side of square");
    scanf("%d",&s);
    areaS=s*s;
    printf("Area of Square%d \n",areaS);
    printf("Enter length of Rectangle");
    scanf("%d",&l);
    printf("Enter breadth of Rectangle");
    scanf("%d",&b);
    areaR=l*b;
    printf("Area of Rectangle%d\n",areaR);
}